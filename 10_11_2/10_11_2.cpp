// ���� 10-11 �ɸ�дΪʹ��ѭ���ķ�ʽ����ɣ������������£�

#include<stdio.h>

int fact(int n);

int main()
{
	int i;

	printf("������Ҫ��׳˵�һ��������");
	scanf("%d",&i);

	printf("%d�Ľ׳˽��Ϊ��%d\n",i,fact(i));
//	getch(); // Question: Ϊʲô���� getch ��������������
	return 0;
}

int fact(int n)
{
	int i,m;

	for(m=1,i=n;i;i--)
	{
		m*=i;
	}
	return m;
}

