void nzp(int a[5])
{
	int i;
	printf("\n Values of array a are:\n");
	for(i=0;i<5;i++)
	{
		if(a[i]<0) a[i]=0;
		printf("%d ",a[i]);
	}
}

main()
{
	int b[5],i;
	printf("\n Input 5 numbers:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	printf("initial values of array b are:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	printf("\n");

	nzp(b);

	printf("\n");
	printf("\n last values of array b are:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);

	getch();
}



