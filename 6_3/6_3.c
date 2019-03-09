#include<stdio.h>
int main()
{
	int i=-78,j=65535;
	printf("%d%d\n",i,j);
	printf("%4d%4d\n",i,j);
	printf("%-4d%-4d\n",i,j);
	printf("%+4d%+4d\n",i,j);
	printf("%#x%#o\n",i,j);
	printf("%04d%04d\n",i,j);
	getch();
	return 0;
}