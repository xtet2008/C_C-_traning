//用 break 语句跳出循环示例

#include<stdio.h>

int main()
{
	float n,sum=0;
	int i=0;

	do
	{
		printf("请输入累加的数(若输入0，则完成累加):");
		scanf("%f",&n);
		if(n==0)
			break;
		i++;
		sum+=n;
	}while(1);
	printf("\n您你输入了%d个数，所有数之和为：%.2f\n",i,sum);
	getch();
	return 0;
}
