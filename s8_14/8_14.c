/* 外部变量与局部变量同名。*/
int a=3,b=5; /*a,b为外部变量*/
max(int a,int b ) /*a,b为外部变量*/
{
	int c;
	c=a>b?a:b;
	return (c);
}

main()
{
	int a=8;
	printf("%d\n",max(a,b));

	getch();
}

/* 如果同一个源文件中，外部变量与局部变量同名，则在局部变量的作用范围内，外部变量被“屏蔽”，即它不起作用。*/