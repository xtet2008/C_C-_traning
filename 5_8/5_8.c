#include<stdio.h>
int main()
{
	int a,b,c;
	int max;

	printf("请输入第1个整数：");
	scanf("%d",&a);
	printf("请输入第2个整数：");
	scanf("%d",&b);
	printf("请输入第3个整数：");
	scanf("%d",&c);
	max=(a>b?a:b);
	max=(max>c?max:c);
	printf("最大数是：%d\n",max);
	getch();
	return 0;
}