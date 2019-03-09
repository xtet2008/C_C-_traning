// 求连续自然数之和示例 (优化后的代码)

#include<stdio.h>

int main()
{
	int n,i,sum=0;

	printf("请输入一个整数：");
	scanf("%d",&n);

	i=n;
	while(i)
		sum+=i--;
	printf("1到%d所有自然数之和为：%d\n",n,sum);
	getch();
	return 0;
}