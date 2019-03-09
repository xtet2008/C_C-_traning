#include<stdio.h>
int main()
{
	int i;
	printf("%d\n",((i=5*2,i*3),i*5));
	getch();
	return 0;
}