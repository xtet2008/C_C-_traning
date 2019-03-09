/* 把一个整数按大小顺序插入已排好序的数组中。 */
main()
{
	int i,j,p,q,s,n,a[11]={127,3,6,28,54,68,87,105,162,18};
	/* Step1: 把数组 a[11]中的数按从大到小的顺序重排 */
	for(i=0;i<10;i++)
	{
		p=i;q=a[i];
		for(j=i+1;j<10;j++)
			if(q<a[j]){p=j;q=a[j];}
			if(p!=i)
			{
				s=a[i];
				a[i]=a[p];
				a[p]=s;
			}
		printf("%d ",a[i]);
	}

	/* Step2: 随便输入一个数，然后再做比较 */
	printf("\n Please input a number :\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
		if(n>a[i])
		{
			for(s=9;s>=i;s--)
				a[s+1]=a[s];
				break;
		}
		a[i]=n;
	for(i=0;i<=10;i++)
		printf("%d ",a[i]);
		printf("\n");
	getch();
}

