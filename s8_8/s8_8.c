/*����a�д����һ��ѧ��5�ſγ̵ĳɼ�����ƽ���ɼ���*/
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