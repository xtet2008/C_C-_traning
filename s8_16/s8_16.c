/* ��ӡ1��5�Ľ׳�ֵ�� */
int fac(int n)
{
	static int f =1;
	f=f*n;
	return (f);
}

main()
{
	int i;
	for(i=1;i<=5;i++)
		printf("%d!=%d\n",i,fac(i));
	getch();
}
