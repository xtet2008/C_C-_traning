// ͳ��ѧ���ɼ�ʾ������ʹ�����飩

#include<stdio.h>

int main()
{
	float scroe1,scroe2,scroe3,scroe4,scroe5,avg,sum;

	printf("������ѧ��5�ſγ̳ɼ���\n");
	scanf("%f%f%f%f%f",&scroe1,&scroe2,&scroe3,&scroe4,&scroe5);

	sum=scroe1+scroe2+scroe3+scroe4+scroe5;
	avg=sum/5.0;
	printf("�ܷ֣�%.2f��ƽ���֣�%.2f\n",sum,avg);
	getch();
	return 0;
}

