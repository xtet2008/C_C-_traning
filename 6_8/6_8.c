#include<stdio.h>
#define STR "Hello,China!"

int main()
{
	printf("%s*\n",STR);
	printf("%15s*\n",STR);
	printf("%-15s*\n",STR);
	printf("%15.5s*\n",STR);
	printf("%-15.5s*\n",STR);
	printf("使用printf函数输出字符串的例子，输出字符串为：%s*\n",STR);
	printf("使用printf函数输出字符串的例子，\
输出字符串为：%s*\n",STR); //必须要顶格输入
	printf("使用printf函数输出字符串的例子，"
			"输出字符串为：%s*\n",STR); //两个或多个双引号表示同一个字符
	getch();
	return 0;
}
