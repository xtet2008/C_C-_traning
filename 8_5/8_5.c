//活力初始化部分的for循环示例

#include<stdio.h>

int main()
{

	int i,j;

	printf("请输入求平方的起始数和终止数：");
	scanf("%d%d",&i,&j);

	for(;i<=j;i++)
		printf("%d的平方是%d\n",i,i*i);
	getch();
	return 0;
}