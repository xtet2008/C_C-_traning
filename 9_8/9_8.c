// �ַ�����ʾ��

#include<stdio.h>

int main()
{
	char name[10];
	int i;

	printf("��������������(10���ַ�����)��");
	for(i=0;i<10;i++)
		scanf("%c",&name[i]);

	printf("��������ǣ�");
	for(i=0;i<10;i++)
		printf("%c",name[i]);
	getch();
	return 0;
}