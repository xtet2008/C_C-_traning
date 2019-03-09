/* 输入五个国家的名称按字母顺序A-Z排列输出。 */
main()
{
	char st[20],cs[5][20];
	int i,j,p;
	printf("Input coutry's name :\n");

	for(i=0;i<5;i++)gets(cs[i]);
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		p=i;strcpy(st,cs[i]);
		for(j=i+1;j<5;j++)
			if(strcmp(cs[j],st)<0)
			{
				p=j;strcpy(st,cs[j]);
			}
		if(p!=i)
		{
			strcpy(st,cs[i]);
			strcpy(cs[i],cs[p]);
			strcpy(cs[p],st);
		}
		puts(cs[i]);
	}

	printf("\n");
	getch();
}

/*	
本程序的第一个for语句中，用gets函数输入五个国家名字符串。上面说过Ｃ语言允许把一个二维数组按多个一维数组处理，
本程序说明cs[5][20]为二维字符数组，可分为五个一维数组cs[0]，cs[1]，cs[2]，cs[3]，cs[4]。因此在gets函数中使
用cs[i]是合法的。在第二个for语句中又嵌套了一个for语句组成双重循环。这个双重循环完成按字母顺序排序的工作。在外
层循环中把字符数组cs[i]中的国名字符串拷贝到数组st中，并把下标i赋予P。进入内层循环后，把st与cs[i]以后的各字符
串作比较，若有比st小者则把该字符串拷贝到st中，并把其下标赋予p。内循环完成后如p不等于i说明有比cs[i]更小的字符
串出现，因此交换cs[i]和st的内容。至此已确定了数组cs的第i号元素的排序值。然后输出该字符串。在外循环全部完成之
后即完成全部排序和输出。
*/
