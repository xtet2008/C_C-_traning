// 用 if 语句求最大数

#include<stdio.h>

int main()
{
	int i,j,max;

	printf("请输入两个整数：");
	scanf("%d%d",&i,&j);

	max=i;
	if(max<j) max=j;

	printf("您输入的数是%d和%d，最大数是%d\n",i,j,max);
	getch();
	return 0;
}