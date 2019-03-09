#include<stdio.h>
int main()
{
	int iold,i1,i2,i3;
	printf("请输入一个整数：");
	scanf("%d",&i1);
	iold=i1;
	i2=i1++;
//	printf("你输入的整数为：%d\n",iold);
	printf("通过i2=i1++运算以后\ni2=%d\ni1=%d\n\n",i2,i1);
	i3=++i1;
	printf("通过i3=++i1运算以后\ni3=%d\ni1=%d\n",i3,i1);
	getch();
	return 0;
}
	