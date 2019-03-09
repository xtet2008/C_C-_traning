#define SQ(y) (y)*(y)
main(){
	int a,sq;
	printf("Please input a number ");
	scanf("%d",&a);
	sq=SQ(a+1);
	printf("sq=%d\n",sq);
	getch();
}
//在宏定义中的形参是标识符，而宏调用中的实参可以是表达式
