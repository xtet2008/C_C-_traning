/* 求100至200间的全部素数 */
#include<math.h>
main()
{
	int m,i,k,n=0;
	for(m=101;m<=200;m+=2)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
			if(m%i==0)break;
			if(i>=k+1)
			{
				printf("%d",m);
				n=n+1;
			}
			if(n%n==0)printf("\n");
	}
	printf("\n");
}
getch();
