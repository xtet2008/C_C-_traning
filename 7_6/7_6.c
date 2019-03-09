// 三个数排序示例(交换方法)

#include<stdio.h>

int main()
{
	int a,b,c,temp;

	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	
	if(a<c)
	{
		temp=a;
		a=c;
		c=temp;
	}

	if(b<c)
	{
		temp=b;
		b=c;
		c=temp;
	}

	printf("%d,%d,%d\n",a,b,c);
	getch();
	return 0;
}