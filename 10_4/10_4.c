// ������ֵ����ʾ��

#include<stdio.h>

int add(int a,int b);

int main()
{
	int i=5,j=10;

	printf("���ú���ǰ��i=%d��j=%d\n",i,j);
	printf("i+j=%d\n",add(i,j));
	printf("���ú�����i=%d��j=%d\n",i,j);
	getch();
	return 0;
}

int add(int a,int b)
{
	a+=b;
	return a;
}