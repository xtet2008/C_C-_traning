// �� if else ��������������

#include<stdio.h>

int main()
{
	int i,j;

	printf("����������������");
	scanf("%d%d",&i,&j);

	if(i>j)
		printf("�������������С����˳��Ϊ%d, %d\n",j,i);
	else
		printf("�������������С����˳��Ϊ%d, %d\n",i,j);
	getch();
	return 0;
}