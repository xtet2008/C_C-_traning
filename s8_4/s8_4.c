/* 计算s=2平方!+3平方! */

long f1(int p)
{
	int k ;
	long r;
	long f2(int);
	k=p*p;
	r=f2(k);
	return r;
}

long f2(int q)
{
	long c=1;
	int i;
	for(i=1;i<=q;i++)
		c=c*i;
	return c;
}


main()
{
	int i;
	long s=0;
	for(i=2;i<=3;i++)
		s=s+f1(i);
	printf("\n s=%ld\n",s);
	getch();
}
