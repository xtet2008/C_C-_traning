#include<stdio.h>
int main()
{
	int i,j;
	i=j=0;
	printf("变量i\t变量j\t\n");
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i++,++j);
	printf("%d\t%d\n",i,j);
	getch();
	return 0;
}