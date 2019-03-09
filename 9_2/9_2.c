// 统计学生成绩示例(使用数组)

#include<stdio.h>
#define NUM 5

int main()
{
	float score[NUM],avg,sum;
	int i;

	printf("请输入学生各课程成绩：\n");
	for(i=0,sum=0;i<NUM;i++)
	{
		scanf("%f",&score[i]);
		sum+=score[i];
	}
	avg=sum/NUM;
	printf("总分：%.2f,平均分：%.2f\n",sum,avg);
	getch();
	return 0;
}
