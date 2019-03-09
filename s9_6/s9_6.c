#define SQ(y) y*y
main()
{
	int a ,sq;
	printf("input a number : ");
	scanf("%d",&a);
	sq=SQ(a+1);
	printf("sq=%d\n",sq);
	getch();

}

//但结果却是不一样的。问题在哪里呢? 这是由于代换只作符号代换而不作其它处理而造成的。
//宏代换后将得到以下语句：sq=a+1*a+1; 而不是 sq=(a+1)*(a+1) ，所以宏定义应该写成为：
//#define SQ(y) y*y

