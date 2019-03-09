// 函数的值调用示例

#include<stdio.h>

int add(int a,int b);

int main()
{
	int i=5,j=10;

	printf("调用函数前，i=%d，j=%d\n",i,j);
	printf("i+j=%d\n",add(i,j));
	printf("调用函数后，i=%d，j=%d\n",i,j);
	getch();
	return 0;
}

int add(int a,int b)
{
	a+=b;
	return a;
}