// �ַ�����תʾ��
#include<stdio.h>

int main()
{
	char arr[80],temp;
	int i,j;

	printf("������һ���ַ���(80���ַ�֮��)��");
	scanf("%s",arr);

	printf("������ַ���Ϊ��%s\n\n",arr);
	for(i=0;arr[i];i++) // �����ַ����Ľ�����־ "\0", ���û�����д��룬�����ᷴת
		;

	for(j=0;j<i/2;j++)
	{
		temp=arr[j];
		arr[j]=arr[i-j-1];
		arr[i-j-1]=temp;
	}
	printf("ת������ַ���Ϊ��%s\n",arr);
	getch();
	return 0;
}

