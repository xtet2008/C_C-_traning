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
��ִ�б�����ʱ����Ϊ5������5!�����������еĵ�����伴Ϊy=ff(5)������ff����������n=5,������0��1��
��Ӧִ��f=ff(n-1)*n,��f=ff(5-1)*5��������ff���ݹ���ü�ff(4)�������Ĵεݹ���ú�ff�����β�ȡ�õ�ֵ��Ϊ1��
�ʲ��ټ����ݹ���ö���ʼ��㷵������������ff(1)�ĺ�������ֵΪ1��ff(2)�ķ���ֵΪ1*2=2��ff(3)�ķ���ֵΪ2*3=6��
ff(4)�ķ���ֵΪ6*4=24����󷵻�ֵff(5)Ϊ24*5=120��
*/