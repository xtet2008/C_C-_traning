#include<stdio.h>
#define STR "Hello,China!"

int main()
{
	printf("%s*\n",STR);
	printf("%15s*\n",STR);
	printf("%-15s*\n",STR);
	printf("%15.5s*\n",STR);
	printf("%-15.5s*\n",STR);
	printf("ʹ��printf��������ַ��������ӣ�����ַ���Ϊ��%s*\n",STR);
	printf("ʹ��printf��������ַ��������ӣ�\
����ַ���Ϊ��%s*\n",STR); //����Ҫ��������
	printf("ʹ��printf��������ַ��������ӣ�"
			"����ַ���Ϊ��%s*\n",STR); //��������˫���ű�ʾͬһ���ַ�
	getch();
	return 0;
}
