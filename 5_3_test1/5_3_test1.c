#include<stdio.h>
int main()
{
	int iold,i1,i2,i3;
	printf("������һ��������");
	scanf("%d",&i1);
	iold=i1;
	i2=i1++;
//	printf("�����������Ϊ��%d\n",iold);
	printf("ͨ��i2=i1++�����Ժ�\ni2=%d\ni1=%d\n\n",i2,i1);
	i3=++i1;
	printf("ͨ��i3=++i1�����Ժ�\ni3=%d\ni1=%d\n",i3,i1);
	getch();
	return 0;
}
	