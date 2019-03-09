#include<stdio.h>

int main()
{
	int m,n;
	float f=130.79069388;

	printf("设置数据最少输出宽度值：");
	scanf("%d",&m);
	printf("设置数据输出的小数位数：");
	scanf("%d",&n);
	printf("%*.*f\n",m,n,f);
	getch();
	return 0;
}
