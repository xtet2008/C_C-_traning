// 程序 10 -7 函数的数组调用示例,也是简单的冒泡排序法

#include<stdio.h>
#define M 10

void nSort(int a[],int n);

int main()
{
	int nTag=0,arr[M]={3,35,34,29,78,22,33,44,66,55};

	for(nTag=0;nTag<M;nTag++)
		printf("%d ",arr[nTag]);

	printf("\n");

	nSort(arr,M);

	for(nTag=0;nTag<M;nTag++)
		printf("%d ",arr[nTag]);

	printf("\n");

	getch();
	return 0;
}

void nSort(int a[],int n)
{
	int i,j,t;

	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
}
