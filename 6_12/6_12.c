#include<stdio.h>

int main()
{
	int i=10;
	long l=90;
	float f=6.18;
	double d=9.18;

	printf("%e,%e,%e,%e\n",i,l,f,d);
	printf("%ld,%ld\n",i,l);
	printf("%ld,%ld,%ld,%ld\n",f,d,i,l);
	getch();
	return 0;
}
