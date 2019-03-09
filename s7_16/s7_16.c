/* ×Ö·û´®±È½Ïº¯Êýstrcmp */
#include<string.h>
main()
{
	int k;
	static char st1[15],st2[]="C language";
	printf("Input a string:\n");
	gets(st1);
	k=strcmp(st1,st2);
	if(k==0)printf("st1=st2\n");
	if(k>0)printf("st1>st2\n");
	if(k<0)printf("st1<st2\n");
	printf("%d",k);
	getch();
}
