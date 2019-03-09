#define OK 100
main()
{
	printf("OK");
	printf("\n");
	printf("%d",OK);
	getch();

}

//上例中定义宏名OK表示100，但在第一个printf语句中OK被引号括起来，因此不作宏代换。程序的运行结果为：OK
//这表示把“OK”当字符串处理。

