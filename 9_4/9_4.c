//Խ���������ʾ��

#include<stdio.h>

int main()
{
	int i,a[10];

	for(i=0;i<10;i++)
		a[i]=i+1;

	for(i=0;i<15;i++)
		printf("��%d������%d\n",i+1,a[i]);
	getch();
	return 0;
}
