//��������Ȼ��֮��(for���)

#include<stdio.h>

int main()
{
	int n,i,sum;

	printf("������һ��������");
	scanf("%d",&n);

	for(sum=0,i=1;i<=n;i++)
		sum+=i;
	printf("1��%d������Ȼ��֮��Ϊ��%d\n",n,sum);
	getch();
	return 0;
}