// �� if ����������

#include<stdio.h>

int main()
{
	int i,j,max;

	printf("����������������");
	scanf("%d%d",&i,&j);

	max=i;
	if(max<j) max=j;

	printf("�����������%d��%d���������%d\n",i,j,max);
	getch();
	return 0;
}