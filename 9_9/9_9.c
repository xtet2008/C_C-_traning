// 字符串的输入输出
#include <stdio.h>

int main()
{
	char name[10];
	int i;

	printf("请输入您的姓名(10个字符以内)：");
	scanf("%s",name);

	printf("你的姓名是：%s\n",name);
	getch();
	return 0;
}
