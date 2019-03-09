#include<stdio.h>

int main()
{
	char string[80];

	printf("请输入一个字符串：");
	gets(string);
//	scanf("%s",&string); // 只接收空格前面的数据，空格后面的数据仍将保留在输入缓冲区。

	printf("输入的字符串是：%s\n",string);
	getch();
	return 0;
}