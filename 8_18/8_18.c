// ��goto ����дѭ������ʾ��

#include<stdio.h>

int main()
{
	int n,i,sum=0;

	printf("������һ��������");
	scanf("%d",&n);

	i=1;
loop: if(i<=n)
	  {
		  sum+=i;
		  i++;
		  goto loop;
	  }
	  printf("1��%d������Ȼ��֮��Ϊ��%d\n",n,sum);
	  getch();
	  return 0;
}
