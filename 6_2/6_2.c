#include<stdio.h>

int main()
{
	int i=68;

	printf("整数%d，输出为字符：%c\n",i,i);
	printf("整数%d，输出为八进制：%o\n",+i,i);
	printf("整数%d，输出为十六进制：%X\n",i,i);
	getch();
	return 0;
}