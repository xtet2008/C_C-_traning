//改变for循环的循环变量递增方式示例
// 投资100万，按年收益12%计算，多少年能达到1000万

#include<stdio.h>

int main()
{
	float s;
	int i=1;

	for(s=100.0;s<=1080.38;s=s*1.12,i++)
	{
		printf("第%d年收益为%.2f\n",i,s);
	}
	getch();
	return 0;
}
