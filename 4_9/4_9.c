#include<stdio.h>
int main()
{
	float f=3.14e30,fl;
	fl=f+1-f;
	printf("f=%f\n",f);
	printf("f+1-f=%f\n",fl);
	getch();
	return 0;
}
