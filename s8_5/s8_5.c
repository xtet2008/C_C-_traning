long ff(int n)
{

	long f;

	
	if(n<0)printf("n<0,Input error");
	else if (n==0 || n==1)f=1;
	else f=ff(n-1)*n;

	return (f);
}

main()
{
	int n;
	long y;
	printf("\n Input a integer number:\n");
	scanf("%d",&n);
	y=ff(n);
	printf("%d!=%ld",n,y);
	getch();
}

/*
设执行本程序时输入为5，即求5!。在主函数中的调用语句即为y=ff(5)，进入ff函数后，由于n=5,不等于0或1，
故应执行f=ff(n-1)*n,即f=ff(5-1)*5。该语句对ff作递归调用即ff(4)。进行四次递归调用后，ff函数形参取得的值变为1，
故不再继续递归调用而开始逐层返回主调函数。ff(1)的函数返回值为1，ff(2)的返回值为1*2=2，ff(3)的返回值为2*3=6，
ff(4)的返回值为6*4=24，最后返回值ff(5)为24*5=120。
*/