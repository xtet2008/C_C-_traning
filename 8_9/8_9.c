//�� while ѭ����ʾ�˵�ʾ��

#include<stdio.h>

int main()
{
	int i;

	printf("1.¼������\n");
	printf("2.��ѯ����\n");
	printf("3.�������\n");
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&i);

	while(i)
	{
		switch(i)
		{
			case 1:
				printf("����¼�����ݺ�����\n\n");
				break;
			case 2:
				printf("���ò�ѯ���Ϻ�����\n\n");
				break;
			case 3:
				printf("����������Ϻ�����\n\n");
				break;
			case 0:
				//printf("�˳�ϵͳ\n");
				break;
			default :
				printf("���������ѡ���Ӧ�˵�!\n\n");
				break;
		}
		printf("1.¼������\n");
		printf("2.��ѯ����\n");
		printf("3.�������\n");
		printf("0.�˳�ϵͳ\n");
		scanf("%d",&i);
	}
	getch();
	return 0;
}
