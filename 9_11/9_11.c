// ��������е������ʾ��
#include <stdio.h> 

int main()
{
	float arr[10],max;
	int i;

	printf("������10����:\n");
	for(i=0;i<10;i++)
		scanf("%f",&arr[i]);

	max=arr[0];
	for(i=1;i<10;i++)
		if(arr[i]>max)
			max=arr[i];

	printf("�������10����Ϊ��");
	for(i=0;i<10;i++)
		printf("% .2f ",arr[i]);

	printf("�����Ϊ��%.2f\n",max);
	getch();
	return 0;
}
