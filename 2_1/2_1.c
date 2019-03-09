#include<stdio.h>
#define pi 3.1415926 /* 定义常量 */
double area(double r); //声明计算面积的函数原型
double perimeter(double r); /*声明计算周长的函数原型*/
void main(void)
{
	float r; /* 定义变量r 保存圆的半径*/
	double s,l; // 定义变量保存面积和周长
	printf("请输入圆的半径："); //显示提示信息
	scanf("%f",&r);
	s=area(r);
	l=perimeter(r);
	printf("半径R=%.2f,面积S=%.2f \n",r,s);
	printf("半径R=%.2f,周长L=%.2f \n",r,l);
}

double area(double r)
{
	double s;
	s=pi*r*r;
	return s;
}

double perimeter(double r)
{
	double l;
	l=pi*2*r;
	return l;
}
