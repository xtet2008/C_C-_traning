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

//�����ȴ�ǲ�һ���ġ�������������? �������ڴ���ֻ�����Ŵ��������������������ɵġ�
//������󽫵õ�������䣺sq=a+1*a+1; ������ sq=(a+1)*(a+1) �����Ժ궨��Ӧ��д��Ϊ��
//#define SQ(y) y*y

