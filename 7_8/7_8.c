//����ת��Ϊ������������(switch���)

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
		break;
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	default:
		printf("�������!\n");
	}
	getch();
	return 0;
}