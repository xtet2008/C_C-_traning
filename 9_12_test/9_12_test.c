//����Ԫ������ʾ��,�Ӵ�С - ð������
#include<stdio.h>
#include<stdlib.h>
#define N 10

int maint()
{
	int a[N],i,j,temp;

	printf("������%d��������",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);

	for(i=0;i<N-1;i++)
	{
		for(j=i;j<N;j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}

	printf("��������");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	//getch();
	return 0;
}