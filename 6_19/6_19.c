#include<stdio.h>

int main()
{
	char string[80];

	printf("������һ���ַ�����");
	gets(string);
//	scanf("%s",&string); // ֻ���տո�ǰ������ݣ��ո����������Խ����������뻺������

	printf("������ַ����ǣ�%s\n",string);
	getch();
	return 0;
}