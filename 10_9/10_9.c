// 10-9 输出用户输入的命令行参数示例

#include<stdio.h>

int main(int argc,char *arrgv[])
{
	int i;

	for(i=0;i<argc;i++)
		printf("第%d个参数为：%s\n",i,argv[i]);
	getch();
	return 0;
}

// Quesiton can not compiled...