//��forѭ�����ָ���ڼ���ַ�ʾ��

#include<stdio.h>

int main()
{
	char c1,c2;
	
	printf("������������ʼ�ַ��ͽ����ַ���");
	scanf("%c%c",&c1,&c2);

	printf("��ASCII������У��ַ�%c-%c֮��������ַ����£�\n",c1,c2);
	for(;c1<=c2;c1++)
		printf("%c",c1);
	getch();
	return 0;
}
