/*数组a中存放了一个学生5门课程的成绩，求平均成绩。*/
float aver(float a[5])
{
	int i;
	float av,s=a[0];
	for(i=1;i<5;i++)
		s=s+a[i];
	av=s/5;
	return av;
}
void main()
{
	float sco[5],av;
	int i;
	printf("\n Input 5 numbers:\n");
	for (i=0;i<5;i++)
		scanf("%f",&sco[i]);
	av=aver(sco);
	printf("average score is %5.2f",av);

	getch();
}