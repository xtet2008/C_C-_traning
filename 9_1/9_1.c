// 统计学生成绩示例（不使用数组）

#include<stdio.h>

int main()
{
	float scroe1,scroe2,scroe3,scroe4,scroe5,avg,sum;

	printf("请输入学生5门课程成绩：\n");
	scanf("%f%f%f%f%f",&scroe1,&scroe2,&scroe3,&scroe4,&scroe5);

	sum=scroe1+scroe2+scroe3+scroe4+scroe5;
	avg=sum/5.0;
	printf("总分：%.2f，平均分：%.2f\n",sum,avg);
	getch();
	return 0;
}

