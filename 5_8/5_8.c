#include<stdio.h>
int main()
{
	int a,b,c;
	int max;

	printf("�������1��������");
	scanf("%d",&a);
	printf("�������2��������");
	scanf("%d",&b);
	printf("�������3��������");
	scanf("%d",&c);
	max=(a>b?a:b);
	max=(max>c?max:c);
	printf("������ǣ�%d\n",max);
	getch();
	return 0;
}