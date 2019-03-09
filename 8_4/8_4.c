//求连续自然数之和(for语句)

#include<stdio.h>

int main()
{
	int n,i,sum;

	printf("请输入一个整数：");
	scanf("%d",&n);

	for(sum=0,i=1;i<=n;i++)
		sum+=i;
	printf("1到%d所有自然数之和为：%d\n",n,sum);
	getch();
	return 0;
}