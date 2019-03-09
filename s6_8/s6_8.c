main()
{	int i=0;
	char c;
	while(1)
	{
		c='\0';
		while(c!=13 && c!=27) /* 不为回车或Esc键 */
		{
			c=getch();
			printf("%c\n",c);
		}
		if(c==27 || c==13)
		{
			break ;
			i++;
			printf("The No. is %d\n",i);
		}
		printf("The end");
		getch();
	}
}


							
