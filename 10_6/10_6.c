// ͨ��ָ�봫�ݲ���ʾ��

#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int i=5,j=10;

	printf("���ú���ǰ��i=%d��j=%d\n",i,j);
	swap(&i,&j);
	printf("���ú�����i=%d��j=%d\n",i,j);
	getch();
	return 0;
}

void swap(int *a,int *b)
{
	int t;

	t=*a;
	*a=*b;
	*b=t;
}
