#include<stdio.h>

int main()
{
	int i,j,t,n,temp,a[10];

	for(i=0;i<n-1;i++)
	{
		t=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[t])t=j;
			if(t!=i)
			{
				temp=a[t];
				a[t]=a[i];
				a[i]=temp;
			}
		}
	}

	for(i=1;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}