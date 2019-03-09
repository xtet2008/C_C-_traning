#include<stdio.h>

int main()
{
	char c,d;

	printf("输入一个字符：");
	c=getchar();
	d=getchar(); //直到缓冲区中的字符读完为止，才等待用户按键。
	printf("输入的字符是：%d,%c\n",c,c);
//	printf("d的结果是：%d,%c",d,d);
	getch();
	return 0;
}
