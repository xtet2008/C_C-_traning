// ��������Ȼ��֮��ʾ�� (�Ż���Ĵ���)

#include<stdio.h>

int main()
{
	int n,i,sum=0;

	printf("������һ��������");
	scanf("%d",&n);

	i=n;
	while(i)
		sum+=i--;
	printf("1��%d������Ȼ��֮��Ϊ��%d\n",n,sum);
	getch();
	return 0;
}