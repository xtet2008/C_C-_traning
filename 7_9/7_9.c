// switch�����ر��ʾ��(������)

#include<stdio.h>

int main()
{
	int w;

	printf("������1��������");
	scanf("%d",&w);

	switch(w)
	{
	case 0:
		printf("������\n");
	case 1:
		printf("����һ\n");
	case 2:
		printf("���ڶ�\n");
	case 3:
		printf("������\n");
	case 4:
		printf("������\n");
	case 5:
		printf("������\n");
	case 6:
		printf("������\n");
	default:
		printf("�������!\n");
	}
	getch();
	return 0;
}