// ��������ַ�����ʾ��(if else if ���)

#include<stdio.h>

int main()
{
	char c;

	printf("������һ���ַ���");
	scanf("%c",&c);

	if(c>=65 && c<=90)
		printf("��������Ǵ�д��ĸ��\n");
	else if(c>=97 && c<=122)
		printf("���������Сд��ĸ��\n");
	else if(c>=48 && c <=57)
		printf("������������֣�\n");
	else
		printf("���������������ţ�\n");
	getch();
	return 0;
}