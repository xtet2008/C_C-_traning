#include<stdio.h>

int main()
{
	char c,d;

	printf("����һ���ַ���");
	c=getchar();
	d=getchar(); //ֱ���������е��ַ�����Ϊֹ���ŵȴ��û�������
	printf("������ַ��ǣ�%d,%c\n",c,c);
//	printf("d�Ľ���ǣ�%d,%c",d,d);
	getch();
	return 0;
}
