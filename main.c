#include <stdio.h>

/*
	CouCou je suis LALALA
*/
int main()
{
	/*
		Dans le code
	*/
	char *c = "#include <stdio.h>\n\n/*\n\tCouCou je suis LALALA\n*/\nint main()\n{\n\t/*\n\t\tDans le code\n\t*/\n\tchar *c=%c%s%c;printf(c,34,c,34);}";
	printf(c,34,c,34);
}