// puts����ʾ��

#include<stdio.h>

int main()
{
	char str[80];

	printf("������һ���ַ�����");
	gets(&str);

	puts("������ַ����ǣ�");
	puts(&str);
	getch();
	return 0;
}
