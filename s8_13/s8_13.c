/* ���볤����ĳ����l,w,h���������������x*y,x*z,y*z�������*/

int s1,s2,s3;
int vs(int a,int b,int c)
{
	int v;
	v=a*b*c;
	s1=a*b;
	s2=b*c;
	s3=a*c;
	return v;
}

main()
{
	int v,l,w,h;
	printf("\n Please input lenght,width and height for the box\n");
	scanf("%d%d%d",&l,&w,&h);
	v=vs(l,w,h);
	printf("\n v=%d,s1=%d,s2=%d,s3=%d\n",v,s1,s2,s3);

	getch();
}

