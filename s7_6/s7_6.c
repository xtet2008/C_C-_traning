#include<stdlib.h>
main()
{
	int i,j,s=0,average,v[3],a[5][3];
	printf("Please input score\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[j][i]);
			s=s+a[j][i]	;
		}
		v[i]=s/5;
		s=0;
	}

	average=(v[0]+v[1]+v[2])/3;
	printf("Math:%d\n C language:%d\n Foxpro:%d\n",v[0],v[1],v[2]);
	printf("Total:%d\n",average);
	getch();
}
