/* ��һ����������С˳��������ź���������С� */
main()
{
	int i,j,p,q,s,n,a[11]={127,3,6,28,54,68,87,105,162,18};
	/* Step1: ������ a[11]�е������Ӵ�С��˳������ */
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

	/* Step2: �������һ������Ȼ�������Ƚ� */
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

