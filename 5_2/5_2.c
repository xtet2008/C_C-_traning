#include<stdio.h>
int main()
{
	int t,t1,b0,b1,b2,b3,b4,b5,b6,b7;
	printf("������0-255֮���������");
	scanf("%d",&t);
	
	t1=t;
	b0=t%2;

	t=t/2;
	b1=t%2;

	t=t/2;
	b2=t%2;

	t=t/2;
	b3=t%2;

	t=t/2;
	b4=t%2;

	t=t/2;
	b5=t%2;

	t=t/2;
	b6=t%2;

	t=t/2;
	b7=t%2;

	printf("ʮ��������%d",t1);
	printf("ת��Ϊ��������Ϊ��%d%d%d%d%d%d%d%d\n",b7,b6,b5,b4,b3,b2,b1,b0);
	getch();
	return 0;
}
