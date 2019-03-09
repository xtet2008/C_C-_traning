// 10-8 main 函数的参数示例

#include<stdio.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("使用格式:程序名 您的名称!\n");
		exit(1);
	}
	printf("程序名, %s!\n",argv[0]);
	printf("您好，%s!\n",argv[1]);
	getch();
	return 0;
}