#include<stdio.h>
int main()
{
	int i,j;
	i=j=0;
	printf("����i\t����j\t\n");
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i,j);
	getch();
	return 0;
}