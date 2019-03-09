#include<stdlib.h>
char i;
char c;
void main(){
	for(;(c=getchar())!='\n';i+=c);
	printf("%c",c);
	getch();
}
