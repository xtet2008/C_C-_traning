//ѭ��Ƕ�����ʾ��

#include<stdio.h>

int main()
{
	int r,c,i,j;

	printf("����ÿ��������");
	scanf("%d",&c);

	printf("����������");
	scanf("%d",&r);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}