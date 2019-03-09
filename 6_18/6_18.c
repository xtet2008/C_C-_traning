#include<stdio.h>
#include<conio.h>

int main()
{
	char c;

	printf("按任意键继续！\n");
	c=getch();

	printf("您按的键是：%d\,%c\n",c,c);
	getch();
	return 0;
}