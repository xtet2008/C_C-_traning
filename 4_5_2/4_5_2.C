#include<stdio.h>
int main()
{
	int i;
	printf("请输入一个十进制数：");
	scanf("%d",&i);
	printf("\n你输入的十进制数：%d\n\n",i);
	printf("转换为十六进制数：%x\n\n",i);
	printf("转换为八进制数：%o\n",i);
	getch();
	return 0;
}