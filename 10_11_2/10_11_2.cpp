// 程序 10-11 可改写为使用循环的方式来完成，其程序代码如下：

#include<stdio.h>

int fact(int n);

int main()
{
	int i;

	printf("请输入要求阶乘的一个整数：");
	scanf("%d",&i);

	printf("%d的阶乘结果为：%d\n",i,fact(i));
//	getch(); // Question: 为什么这里 getch 不可以正常运行
	return 0;
}

int fact(int n)
{
	int i,m;

	for(m=1,i=n;i;i--)
	{
		m*=i;
	}
	return m;
}

