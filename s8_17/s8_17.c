int fac(int n)
{
	register int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	return (f);
}

main()
{
	int i;
	for(i=0;i<=5;i++)
		printf("%d!=%d\n",i,fac(i));
	getch();
}

/*
说明：

1)        只有局部自动变量和形式参数可以作为寄存器变量；

2)        一个计算机系统中的寄存器数目有限，不能定义任意多个寄存器变量；

3)        局部静态变量不能定义为寄存器变量。

*/