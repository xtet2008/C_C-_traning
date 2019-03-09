#include<stdio.h>
int main()
{
	int j=65535;
	float f=3.1415926;
	
	printf("j=%.8d\n",j);
	printf("f=%.2f\n",f);
	printf("f=%07.2f\n",f);
	getch();
	return 0;
}
