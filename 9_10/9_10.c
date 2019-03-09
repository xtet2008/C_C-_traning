// 字符串反转示例
#include<stdio.h>

int main()
{
	char arr[80],temp;
	int i,j;

	printf("请输入一个字符串(80个字符之内)：");
	scanf("%s",arr);

	printf("输入的字符串为：%s\n\n",arr);
	for(i=0;arr[i];i++) // 查找字符串的结束标志 "\0", 如果没有这行代码，将不会反转
		;

	for(j=0;j<i/2;j++)
	{
		temp=arr[j];
		arr[j]=arr[i-j-1];
		arr[i-j-1]=temp;
	}
	printf("转换后的字符串为：%s\n",arr);
	getch();
	return 0;
}

