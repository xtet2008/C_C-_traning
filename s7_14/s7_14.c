/* ×Ö·û´®Á¬½Óº¯Êýstrcat */
#include<stdio.h>
#include<string.h>
main()
{
	static char st1[30]="My name is ";
	int st2[10];
	printf("Input your name here:\n");
	gets(st2);
	strcat(st1,st2);
	puts(st1);

	getch();
}

