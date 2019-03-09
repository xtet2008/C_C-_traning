// puts函数示例

#include<stdio.h>

int main()
{
	char str[80];

	printf("请输入一个字符串：");
	gets(&str);

	puts("输入的字符串是：");
	puts(&str);
	getch();
	return 0;
}
