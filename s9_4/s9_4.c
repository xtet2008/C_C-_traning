#define MAX(a,b) (a>b)?a:b
main()
{
	int x,y,max;
	printf("Please input two numbers: ");
	scanf("%d%d",&x,&y);

	max=MAX(x,y);
	printf("The max number is %d",max);
	getch();
}

