//�����Է�ʽ�����ά����Ԫ��ʾ��
#include<stdio.h>

int main()
{
	int score[4][5],i,j;

	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			score[i][j]=i*5+j;

	printf("����ά����������ݣ�\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",score[i][j]);
		printf("\n");
	}

	printf("��һά����������ݣ�\n");
	for(i=0;i<20;i++)
		printf("%3d",score[0][i]);
	getch();
	return 0;

}