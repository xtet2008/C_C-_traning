#include<stdio.h>

int main()
{
	float f1,f2;
	
	printf("������ʵ��f1��");
	scanf("%5f",&f1);

	printf("����������f2��");
	scanf("%5.2f",&f2);

	printf("f1=%f\tf2=%d\n",f1,f2);
	getch();
	return 0;
}
