// 10-8 main �����Ĳ���ʾ��

#include<stdio.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("ʹ�ø�ʽ:������ ��������!\n");
		exit(1);
	}
	printf("������, %s!\n",argv[0]);
	printf("���ã�%s!\n",argv[1]);
	getch();
	return 0;
}