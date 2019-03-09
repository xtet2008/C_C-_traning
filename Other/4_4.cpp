#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int ui=2147483649u;
	long l=65537;
	short s=128;
	long long  vl=13198317333;

	printf("无符号整形数：%u,显示为有符号整形数：%d\n\n",ui,ui);
	printf("短整形数：%hd,显示为无符号短整形：%hu,显示为整形数：%d\n\n",s,s,s);
	printf("长整形数：%ld,显示为整形数：%d,显示为短整形数：%hd\n\n",l,l,l);
	printf("特长整形数：%lld,显示为整形数：%d\n",vl,vl);
	return 0;
}
