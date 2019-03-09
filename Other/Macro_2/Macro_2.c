#define max(a,b) a>b?a:b
#define sqt(a) (a*a)
void main()
{
	float f1,f2;
	int i1;
	i1=3;
	printf("%g",max(6.5,5)); // g mean's auto select type 
	printf("\n%d",sqt((i1+1)));
//	printf("请输入第一个数值");
//	scanf("%f",f1);
//	printf("请输入第二个数值");
//	scanf("%f",&f2);
//
//	pritnf("你输入的两个数分别为：%f和%f",f1,f2);
/*	if (f2>f1)
	{printf("两个数的大小关系为：%f>%f",f2,f1);}
	else{printf("两个数的大小关系为：%f>%f",f1,f2);} */
	getch();
}
