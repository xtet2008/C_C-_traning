// 10-9 ����û�����������в���ʾ��

#include<stdio.h>

int main(int argc,char *arrgv[])
{
	int i;

	for(i=0;i<argc;i++)
		printf("��%d������Ϊ��%s\n",i,argv[i]);
	getch();
	return 0;
}

// Quesiton can not compiled...