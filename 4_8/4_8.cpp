#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("floast 占用%d字节。\n",sizeof(float));
	printf("double 占用%d字节。\n",sizeof(double));
	printf("long double 占用%d字节。\n",sizeof( long double ));
	system("pause");
	return 0;
}