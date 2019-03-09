#include<stdio.h>
int main()
{
	int i=1,j=2,k=3;
	printf("输出第一种形式：\n");
	printf("变量i\t变量j\t变量k\n");
	printf("%d\t%d\t%d\n",i,j,k);
	printf("\n\n输出第二种形式：\n");
	printf("变量i\t%d\n",i);
	printf("变量j\t%d\n",j);
	printf("变量k\t%d\n",k);
	getch();
	return 0;
}

