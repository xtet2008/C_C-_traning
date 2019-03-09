int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
main()
{
	int max(int a,int b);
	int x,y;
	printf("Please input two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("maxnum=%d",max(x,y));
	getch();
}
