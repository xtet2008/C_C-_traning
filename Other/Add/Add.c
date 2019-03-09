#include<stdio.h>


int main(){
	int nTag,nValue=0,a;
	printf("Please enter a number ");
	scanf("%d",&nTag);

	for(a=1;a<nTag+1;a++)nValue=nValue+a;
	printf("The number is %d",nValue);
	getch();
	return 0;
}