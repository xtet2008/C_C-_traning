//��Ǯ��ټ������Ż�ʾ��2
//��������Ϊ5Ǯ��ĸ������Ϊ3Ǯ��С��3ֻ�۸�Ϊ1Ǯ��

#include<stdio.h>

int main()
{
	int x,y,z;

	for(x = 0; x<=12; x+=4)
	{
		y=25-(x/4)*7;
		z=100-x-y;
		printf("������%d,ĸ����%d,С����%d\n",x,y,z);
	}
	getch();
	return 0;
}