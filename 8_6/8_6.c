//�ı�forѭ����ѭ������������ʽʾ��
// Ͷ��100�򣬰�������12%���㣬�������ܴﵽ1000��

#include<stdio.h>

int main()
{
	float s;
	int i=1;

	for(s=100.0;s<=1080.38;s=s*1.12,i++)
	{
		printf("��%d������Ϊ%.2f\n",i,s);
	}
	getch();
	return 0;
}
