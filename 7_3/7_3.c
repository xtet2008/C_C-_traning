// 用 if else 语句对两个数排序

#include<stdio.h>

int main()
{
	int i,j;

	printf("请输入两个整数：");
	scanf("%d%d",&i,&j);

	if(i>j)
		printf("您输入的数按从小到大顺序为%d, %d\n",j,i);
	else
		printf("您输入的数按从小到大顺序为%d, %d\n",i,j);
	getch();
	return 0;
}