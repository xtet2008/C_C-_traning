// 检查输入字符类型示例(if else if 语句)

#include<stdio.h>

int main()
{
	char c;

	printf("请输入一个字符：");
	scanf("%c",&c);

	if(c>=65 && c<=90)
		printf("您输入的是大写字母！\n");
	else if(c>=97 && c<=122)
		printf("您输入的是小写字母！\n");
	else if(c>=48 && c <=57)
		printf("您输入的是数字！\n");
	else
		printf("您输入的是特殊符号！\n");
	getch();
	return 0;
}