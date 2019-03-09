// 求连续自然数之和示例(while 语句，计数器递减)

int main()
{
	int n,i,sum;

	printf("请输入一个整数：");
	scanf("%d",&n);

	sum=0;
	i=n;
	while(i>0)
	{
		sum+=i;
		i--;
	}
	printf("1到%d所有自然数之和为：%d\n",n,sum);
	getch();
	return 0;
}