main()
{
	int n;
	/*int s(int n );*/
	printf("input a number\n");
	scanf("%d",&n);
	s(n);
	printf("n=%d\n",n);
	getch();
}

int s(int n)
{
	int i;
	for(i=n-1;i>=1;i--)
		n=n+i;
	printf("n=%d\n");
	return 0;
}