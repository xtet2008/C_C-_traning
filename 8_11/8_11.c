//循环嵌套输出示例

#include<stdio.h>

int main()
{
	int r,c,i,j;

	printf("输入每行数量：");
	scanf("%d",&c);

	printf("输入行数：");
	scanf("%d",&r);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}