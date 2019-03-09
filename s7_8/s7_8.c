/* 字符数组的引用 */
#include<stdlib.h>
main()
{
	int i,j;
	char a[][5]={{'B','a','s','i','c'},{'D','b','a','s','e'}};
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=4;j++)
		
			printf("%c",a[i][j]);
			printf("\n");
		
	}
	getch();
}


