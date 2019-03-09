//输出数组各元素的内在地址示例
#include<stdio.h>

int main()
{
	int score[4][5],i;

	printf("数组首地址：%d\n",&score);
	printf("数组首地址：%d\n", score);
	printf("数组首地址：%d\n",score[0]);
	/*
	printf("数组首地址：%d\n",score[0][0]); 
	一维数组行名，其标识符本身就代表其首地址，但二维数组不可以，
	所以这行会输出乱的数组地址
	*/
	printf("数组首地址：%d\n\n",&score[0][0]);

	for(i=0;i<4;i++)
	{
		printf("第%d 行的首地址：%d\n",i+1,&score[i][0]);
		/*
		printf("第%d 行的首地址：%d\n",i+1, score[i][0]); 
		一维数组行名，其标识符本身就代表其首地址，但二维数组不可以，
		所以这行会输出乱的数组地址
		*/
		printf("第%d 行的首地址：%d\n",i+1,score[i]);
		printf("第%d 行的首地址：%d\n",i+1,&score[i]);
		printf("-----------------------\n");
	}

	getch();
	return 0;
}
