#include<stdio.h>

int nSumCount(int n);

int main()
{	
	int nMax;
	printf("Please input a number as the max volume.\n");
	scanf("%d",&nMax);

	printf("The max count of sum volume is %d\n",nSumCount(nMax));
	getch();
	return 0;
}
int nSumCount(int n)
{
	if (n<=1)
		return 1;
	else
		return n * nSumCount(n-1);
}


