//�� break �������ѭ��ʾ��

#include<stdio.h>

int main()
{
	float n,sum=0;
	int i=0;

	do
	{
		printf("�������ۼӵ���(������0��������ۼ�):");
		scanf("%f",&n);
		if(n==0)
			break;
		i++;
		sum+=n;
	}while(1);
	printf("\n����������%d������������֮��Ϊ��%.2f\n",i,sum);
	getch();
	return 0;
}
