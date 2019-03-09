#include<stdio.h>

int main()
{
	float f=130.79069388;
	double d=13198317000.2682882;

	printf("f=%f,%5.4f,%e,%g\n",f,f,f,f);
	printf("d=%f,%8.4f,%E,%G\n",d,d,d,d);
	getch();
	return 0;
}