// ��������ֵʾ��

#include<stdio.h>

int int_max();

int main()
{
	printf("���� 8 �� 10 �������Ϊ%d\n",int_max(8));
	printf("���� 8 �� 10 �������Ϊ%d\n",int_max(8.0,10.0));
	printf("���� 8 �� 10 �������Ϊ%d\n",int_max(8,10));
	getch();
	return 0;
}

int int_max(int m, int n)
{
	int max=m;

	if (max<n) max=n;
	return max;
}

