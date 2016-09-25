// get_cpu.cpp : �������̨Ӧ�ó������ڵ㡣66214331
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string GetCPUID()
{
    string CPUID;
	char tmp[256];
    unsigned long s1,s2;
   
    __asm{
        mov eax,01h   //eax=1:ȡCPU���к�
        xor edx,edx
        cpuid
        mov s1,edx
        mov s2,eax
    }

	sprintf(tmp,"%08X%08X",s1,s2);
	CPUID = tmp;
        
    return CPUID;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout<<GetCPUID()<<endl;
	return 0;
}

