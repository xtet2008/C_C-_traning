// 函数返回值示例

#include<stdio.h>

int int_max();

int main()
{
	printf("数据 8 和 10 的最大数为%d\n",int_max(8));
	printf("数据 8 和 10 的最大数为%d\n",int_max(8.0,10.0));
	printf("数据 8 和 10 的最大数为%d\n",int_max(8,10));
	getch();
	return 0;
}

int int_max(int m, int n)
{
	int max=m;

	if (max<n) max=n;
	return max;
}

