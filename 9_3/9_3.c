//使用变长数组示例

#include<stdio.h>

int main()
{
	int i,j;
	float g[j],sum; // question  c++ sp6 不支持 C99编译器，或者又是什么编译器

	printf("请输入数组元素的个数：");
	scanf("%d",&j);

	for(i=0,sum=0;i<j;i++)
	{
		printf("第%d个数：",i+1);
		scanf("%f",&g[i]);

		sum+=g[i];
	}

	for(i=0;i<j;i++)
		printf("第%d个数：%.2f\n",i+1,g[i]);
	printf("合计：%.2f\n",sum);
	getch();
	return 0;
}
