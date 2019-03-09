#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	float r;
	printf("请输入半径：");
	scanf("%f",&r);
	printf("面积=%.2f\n",PI*r*4);
	printf("周长=%.2f\n",2*PI*4);
	system("pause");
	return 0;
}