// ��������Ȼ��֮��ʾ��(while ��䣬����������)

int main()
{
	int n,i,sum;

	printf("������һ��������");
	scanf("%d",&n);
	
	sum=0;
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("1��%d������Ȼ��֮��Ϊ��%d\n",n,sum);
	getch();
	return 0;
}