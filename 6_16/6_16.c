#include<stdio.h>

int main()
{
	int a,b,c,i;

	printf("请输入三个整数：");
	i=scanf("%d%d%d",&a,&b,&c);

	printf("您输入的整数 a=%d,b=%d,c=%d\n",a,b,c);
	printf("共输入了%d个有效数据！\n",i);
	getchar();
	return 0;
}
