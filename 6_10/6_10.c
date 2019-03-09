#include<stdio.h>
#define STR "Hello,China!"

int main()
{
	int i;

	i=printf("%s\n",STR);
	printf("上一行代码输出了%d个字符！\n",i);
	getch();
	return 0;
}