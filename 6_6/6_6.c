#include<stdio.h>
int main()
{
	int i=75,j=-65355;
	
	printf("������:%6d��%6d,���Ϊ�޷�������%12u��%12u\n",i,j,i,j);
	printf("��������%6d��%6d�����Ϊ�˽�������%#12o��%#12o\n",i,j,i,j);
	printf("��������%6d��%6d�����Ϊʮ����������%#10x��%#10x\n",i,j,i,j);
	getch();
	return 0;
}
