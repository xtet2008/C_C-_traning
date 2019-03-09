// 输出数组中的最大数示例
#include <stdio.h> 

int main()
{
	float arr[10],max;
	int i;

	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%f",&arr[i]);

	max=arr[0];
	for(i=1;i<10;i++)
		if(arr[i]>max)
			max=arr[i];

	printf("您输入的10个数为：");
	for(i=0;i<10;i++)
		printf("% .2f ",arr[i]);

	printf("最大数为：%.2f\n",max);
	getch();
	return 0;
}
