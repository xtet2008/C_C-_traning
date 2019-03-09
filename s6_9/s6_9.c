void main()
{
	char c ;
	while (c!=13)
	{
		c=getch();
		if(c==27) /* Èç¹ûÊÇ Esc */
			continue ;
			printf("%c\n",c);
	}
}