#include<stdio.h>
#include<string.h>
#include<stdlib.h>
move(int n,int x,int y,int z)
{

	if(n==1)
		printf("%c-->%c\n",x,z);
	else
	{
		move(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		move(n-1,y,x,z);
	}
}

main()
{
	int h;
	printf("\n input a number:\n");
	scanf("%d",&h);
	printf("the step to moving %2d diskes:\n",h);
	move(h,'a','b','c');

	getch();
}

/*
�ӳ����п��Կ���,move������һ���ݹ麯���������ĸ��β�n,x,y,z��n��ʾԲ������x,y,z�ֱ��ʾ�����롣move �����Ĺ����ǰ�x�ϵ�n��Բ���ƶ���z�ϡ���n==1ʱ��ֱ�Ӱ�x�ϵ�Բ������z�ϣ����x��z����n!=1���Ϊ�������ݹ����move��������n-1��Բ�̴�x�Ƶ�y�����x��z���ݹ����move��������n-1��Բ�̴�y�Ƶ�z���ڵݹ���ù�����n=n-1����n��ֵ��εݼ������n=1ʱ����ֹ�ݹ飬��㷵�ء���n=4 ʱ�������еĽ��Ϊ��

    input number:

    4

    the step to moving 4 diskes:

    a��b

    a��c

    b��c

    a��b

    c��a

    c��b

    a��b

    a��c

    b��c

    b��a

    c��a

    b��c

    a��b

    a��c

b��c
*/