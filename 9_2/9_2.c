// ͳ��ѧ���ɼ�ʾ��(ʹ������)

#include<stdio.h>
#define NUM 5

int main()
{
	float score[NUM],avg,sum;
	int i;

	printf("������ѧ�����γ̳ɼ���\n");
	for(i=0,sum=0;i<NUM;i++)
	{
		scanf("%f",&score[i]);
		sum+=score[i];
	}
	avg=sum/NUM;
	printf("�ܷ֣�%.2f,ƽ���֣�%.2f\n",sum,avg);
	getch();
	return 0;
}
