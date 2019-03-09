#include<stdio.h>
int main()
{
	int t,t1,i=0;
	int b[8];

	printf("请输入0-255之间的整数：");
	scanf("%d",&t);
	t1=t;
	while(b[i++]=t%2,t=t/2);
		printf("十进制数：%d",t1);
		printf("转换为二进制数：");
	i=7;
	while(i>=0)
		printf("%d",b[i--]);
	getch();
	return 0;
}
