//用for循环输出指定期间的字符示例

#include<stdio.h>

int main()
{
	char c1,c2;
	
	printf("请连续输入起始字符和结束字符：");
	scanf("%c%c",&c1,&c2);

	printf("在ASCII码码表中，字符%c-%c之间的所有字符如下：\n",c1,c2);
	for(;c1<=c2;c1++)
		printf("%c",c1);
	getch();
	return 0;
}
