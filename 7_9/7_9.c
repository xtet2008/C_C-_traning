// switch语句多重标号示例(错误结果)

#include<stdio.h>

int main()
{
	int w;

	printf("请输入1个整数：");
	scanf("%d",&w);

	switch(w)
	{
	case 0:
		printf("星期日\n");
	case 1:
		printf("星期一\n");
	case 2:
		printf("星期二\n");
	case 3:
		printf("星期三\n");
	case 4:
		printf("星期四\n");
	case 5:
		printf("星期五\n");
	case 6:
		printf("星期六\n");
	default:
		printf("输入错误!\n");
	}
	getch();
	return 0;
}