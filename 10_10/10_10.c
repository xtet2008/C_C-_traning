// 10-10 ����Ƕ�׵���ʾ��

#include<stdio.h>

int int_max(int a,int b);
int max(int a ,int b,int c);

int main()
{
	int i,j,k;

	printf("��������������: ");
	scanf("%d%d%d",&i,&j,&k);

	printf("�����Ϊ��%d\n",max(i,j,k));
	getch();
	return 0;
}

int max(int a,int b ,int c)
{
	int m;

	m=int_max(a,b);
	m=int_max(m,c);
	return m;
}

int int_max(int a,int b)
{
	return (a>b)?a:b;
}
