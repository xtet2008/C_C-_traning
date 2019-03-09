//百钱买百鸡代码优化示例2
//公鸡单价为5钱，母鸡单价为3钱，小鸡3只价格为1钱。

#include<stdio.h>

int main()
{
	int x,y,z;

	for(x = 0; x<=12; x+=4)
	{
		y=25-(x/4)*7;
		z=100-x-y;
		printf("公鸡：%d,母鸡：%d,小鸡：%d\n",x,y,z);
	}
	getch();
	return 0;
}