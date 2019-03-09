//用 while 循环显示菜单示例

#include<stdio.h>

int main()
{
	int i;

	printf("1.录入数据\n");
	printf("2.查询资料\n");
	printf("3.输出资料\n");
	printf("0.退出系统\n");
	scanf("%d",&i);

	while(i)
	{
		switch(i)
		{
			case 1:
				printf("调用录入数据函数。\n\n");
				break;
			case 2:
				printf("调用查询资料函数。\n\n");
				break;
			case 3:
				printf("调用输出资料函数。\n\n");
				break;
			case 0:
				//printf("退出系统\n");
				break;
			default :
				printf("输入错误，请选择对应菜单!\n\n");
				break;
		}
		printf("1.录入数据\n");
		printf("2.查询资料\n");
		printf("3.输出资料\n");
		printf("0.退出系统\n");
		scanf("%d",&i);
	}
	getch();
	return 0;
}
