/* ²â×Ö·û´®³¤¶Èº¯Êýstrlen */
#include<string.h>
main()
{
	int k;
	static char st[]="C language";
	char st2[100];
	printf("Please input a string here!");
	gets(st2);
	k=strlen(st);
	printf("The length of the string is %d\n",k);
	printf("The length of you input string is %d\n",strlen(st2));
	getch();
}
