#include<stdio.h>
int main()
{
	int i=65,j;
	char c='a';
	j=i+1;
	printf("����i=%d,��ʾ�ַ���%c\n",i,i);
	printf("����j=%d,��ʾ�ַ���%c\n",j,j);
	printf("�ַ�c=%c,��ʾΪ������%d\n",c,c);
	c=c+1;
	printf("�ַ�c=%c,��ʾΪ������%d\n",c,c);
	getch();
	return 0;
}
