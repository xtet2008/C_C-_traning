// 字符数组示例

#include<stdio.h>

int main()
{
	char name[10];
	int i;

	printf("请输入您的姓名(10个字符以内)：");
	for(i=0;i<10;i++)
		scanf("%c",&name[i]);

	printf("你的姓名是：");
	for(i=0;i<10;i++)
		printf("%c",name[i]);
	getch();
	return 0;
}