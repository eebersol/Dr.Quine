#include <stdio.h>

int toto(){return(0);}
/*1*/
int main()
{
	/*Dans le code*/
	toto();
	char*c="#include <stdio.h>%1$c%1$cint toto(){return(0);}%1$c/*1*/%1$cint main()%1$c{%1$c%2$c/*Dans le code*/%1$c%2$ctoto()%1$c%2$cchar*c=%3$c%4$s%3$c;%1$c%2$cprintf(c,10,9,34,c);%1$c}%1$c";
	printf(c,10,9,34,c);
}
