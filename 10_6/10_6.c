// 通过指针传递参数示例

#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int i=5,j=10;

	printf("调用函数前，i=%d，j=%d\n",i,j);
	swap(&i,&j);
	printf("调用函数后，i=%d，j=%d\n",i,j);
	getch();
	return 0;
}

void swap(int *a,int *b)
{
	int t;

	t=*a;
	*a=*b;
	*b=t;
}
