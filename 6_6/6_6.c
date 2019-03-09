#include<stdio.h>
int main()
{
	int i=75,j=-65355;
	
	printf("整型数:%6d和%6d,输出为无符号数：%12u和%12u\n",i,j,i,j);
	printf("整形数：%6d和%6d，输出为八进制数：%#12o和%#12o\n",i,j,i,j);
	printf("整形数：%6d和%6d，输出为十六进制数：%#10x和%#10x\n",i,j,i,j);
	getch();
	return 0;
}
