// �����ֵ����ʾ��

#include<stdio.h>

int int_max(int m,int n);

int main()
{
	int i,j,m;

	printf("����2��������");
	scanf("%d%d",&i,&j);

	m=int_max(i,j);
	printf("�����Ϊ��%d\n",m);
	getch();
	return 0;
}

int int_max(int m,int n)
{
	int max=m;

	if (max<n) max=n;
	return max;
}