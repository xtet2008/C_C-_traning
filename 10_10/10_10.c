// 10-10 函数嵌套调用示例

#include<stdio.h>

int int_max(int a,int b);
int max(int a ,int b,int c);

int main()
{
	int i,j,k;

	printf("请输入三个整数: ");
	scanf("%d%d%d",&i,&j,&k);

	printf("最大数为：%d\n",max(i,j,k));
	getch();
	return 0;
}

int max(int a,int b ,int c)
{
	int m;

	m=int_max(a,b);
	m=int_max(m,c);
	return m;
}

int int_max(int a,int b)
{
	return (a>b)?a:b;
}
