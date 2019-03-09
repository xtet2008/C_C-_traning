#define SQ(y) ((y)*(y))
main()
{
	int a,sq;
	printf("input a number");
	scanf("%d",&a);
	sq=160/SQ(a+1);
	printf("sq=%d\n",sq);
	getch();
}
//以上讨论说明，对于宏定义不仅应在参数两侧加括号，也应在整个字符串外加括号。

