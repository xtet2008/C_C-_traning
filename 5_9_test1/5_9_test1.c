#include<stdio.h>
void main()
{
	int a,b;
	a=4;
	b=a+++a+++a++;
	printf("b=%d\ta=%d\n",b,a);
	getch();
}
