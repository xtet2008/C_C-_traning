#include<stdio.h>
void main()
{
	int a=4;
	printf("b=%d\ta=%d\n",(a+++a+++a++),a);
	printf("a=%d\n",a);
	getch();
}