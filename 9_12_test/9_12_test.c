//数组元素排序示例,从大到小 - 冒泡排序
#include<stdio.h>
#include<stdlib.h>
#define N 10

int maint()
{
	int a[N],i,j,temp;

	printf("请输入%d个整数：",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);

	for(i=0;i<N-1;i++)
	{
		for(j=i;j<N;j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}

	printf("排序结果：");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	//getch();
	return 0;
}