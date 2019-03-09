//越界访问数组示例

#include<stdio.h>

int main()
{
	int i,a[10];

	for(i=0;i<10;i++)
		a[i]=i+1;

	for(i=0;i<15;i++)
		printf("第%d个数：%d\n",i+1,a[i]);
	getch();
	return 0;
}
