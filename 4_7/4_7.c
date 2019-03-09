#include<stdio.h>
int main()
{
	int i=65,j;
	char c='a';
	j=i+1;
	printf("整数i=%d,显示字符：%c\n",i,i);
	printf("整数j=%d,显示字符：%c\n",j,j);
	printf("字符c=%c,显示为整数：%d\n",c,c);
	c=c+1;
	printf("字符c=%c,显示为整数：%d\n",c,c);
	getch();
	return 0;
}
