//ʹ�ñ䳤����ʾ��

#include<stdio.h>

int main()
{
	int i,j;
	float g[j],sum; // question  c++ sp6 ��֧�� C99����������������ʲô������

	printf("����������Ԫ�صĸ�����");
	scanf("%d",&j);

	for(i=0,sum=0;i<j;i++)
	{
		printf("��%d������",i+1);
		scanf("%f",&g[i]);

		sum+=g[i];
	}

	for(i=0;i<j;i++)
		printf("��%d������%.2f\n",i+1,g[i]);
	printf("�ϼƣ�%.2f\n",sum);
	getch();
	return 0;
}
