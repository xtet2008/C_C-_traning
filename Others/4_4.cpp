#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int ui=2147483649u;
	long l=65537;
	short s=128;
	long long  vl=13198317333;

	printf("�޷�����������%u,��ʾΪ�з�����������%d\n\n",ui,ui);
	printf("����������%hd,��ʾΪ�޷��Ŷ����Σ�%hu,��ʾΪ��������%d\n\n",s,s,s);
	printf("����������%ld,��ʾΪ��������%d,��ʾΪ����������%hd\n\n",l,l,l);
	printf("�س���������%lld,��ʾΪ��������%d\n",vl,vl);
	return 0;
}
