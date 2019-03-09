//用continue语句路过循环部分语句示例

#include<stdio.h>

int main()
{
	float n,sum=0;
	int i=0;

	do 
	{
		printf("请输入累加的数：");
		scanf("%f",&n);

		if(n<0)
			continue;
		if(n==0)
			break;
		i++;
		sum+=n;
	}while(1);
	printf("\n您输入了%d个正数,所有正数之和为：%.2f\n",i,sum);
	getch();
	return 0;
}