// �� if ��������������

#include<stdio.h>

int main()
{
	int i,j,temp; // j must convert to the bigger number.

	printf("����������������");
	scanf("%d%d",&i,&j);

	if(i>j)
	{
		temp=i;
		i=j;
		j=temp;
	}
	printf("�������������С����˳��Ϊ��%d, %d\n",i,j);
	getch();
	return 0;
}