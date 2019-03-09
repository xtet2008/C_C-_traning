#include<stdio.h>
int main()
{
	int i;
	printf("请输入一位十进制数：");
	scanf("%d",&i);
	printf("%d,变为十六进制为%X",i,i);
	getch();
	return 0;
}
