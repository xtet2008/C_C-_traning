// ����������ʾ�� (if ���Ƕ�׷���)

#include<stdio.h>

int main()
{
	int a,b,c;

	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
		if(b>c)
			printf("%d,%d,%d",a,b,c);
		else
			if(a>c)
				printf("%d,%d,%d",a,c,b);
			else
				printf("%d,%d,%d",c,a,b);
	else // a<b
		if(b<c)
			printf("%d,%d,%d",c,b,a);
		else // b>c
			if(a>c)
				printf("%d,%d,%d",b,a,c);
			else // a<c
				printf("%d,%d,%d",b,c,a);
	getch();
	return 0;
}