/* ��extern�����ⲿ��������չ�����ļ��е������� */
/*extern A,B;*/
int max(int x,int y)
{	
	int z;
	/*
	printf("A=%d\n",A);
	printf("B=%d\n",B);
	*/
	z=x>y?x:y;
	return (z);
}

main()
{
	extern A,B;
	printf("A=%d\n",A);
	printf("B=%d\n",B);

	printf("%d\n",max(A,B));
	getch();
}
int A=13,B=-8;

/*
˵�����ڱ������ļ������1�ж������ⲿ����A��B���������ⲿ���������λ���ں���main֮��
��˱�����main�����в��������ⲿ����A��B������������main��������extern��A��B���С��ⲿ����������
���Ϳ��Դӡ����������𣬺Ϸ���ʹ�ø��ⲿ����A��B��
*/

