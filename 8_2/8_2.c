// ��������Ȼ��֮��ʾ��(while ��䣬�������ݼ�)

int main()
{
	int n,i,sum;

	printf("������һ��������");
	scanf("%d",&n);

	sum=0;
	i=n;
	while(i>0)
	{
		sum+=i;
		i--;
	}
	printf("1��%d������Ȼ��֮��Ϊ��%d\n",n,sum);
	getch();
	return 0;
}