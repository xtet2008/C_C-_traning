// 用goto 语句编写循环代码示例

#include<stdio.h>

int main()
{
	int n,i,sum=0;

	printf("请输入一个整数：");
	scanf("%d",&n);

	i=1;
loop: if(i<=n)
	  {
		  sum+=i;
		  i++;
		  goto loop;
	  }
	  printf("1到%d所有自然数之和为：%d\n",n,sum);
	  getch();
	  return 0;
}
