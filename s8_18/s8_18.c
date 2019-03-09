/* 用extern声明外部变量，扩展程序文件中的作用域。 */
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
说明：在本程序文件的最后1行定义了外部变量A，B，但由于外部变量定义的位置在函数main之后，
因此本来在main函数中不能引用外部变量A，B。现在我们在main函数中用extern对A和B进行“外部变量声明”
，就可以从“声明”处起，合法地使用该外部变量A和B。
*/

