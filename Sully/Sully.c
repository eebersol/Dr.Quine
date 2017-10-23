#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int i = -1;
char result[80];
char name[80];
char exec[80];

int main()
{
	if (i > 0)
	{
		if (strlen(__FILE__) != 7){i--;}
		FILE *fd;
		sprintf(result, "Sully_%d.c",i);
		fd = fopen(result, "w+");
		char *cpy = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#include <fcntl.h>%1$c#include <sys/types.h>%1$c#include <sys/stat.h>%1$c#include <unistd.h>%1$cint i = %4$d;%1$cchar result[80];%1$cchar name[80];%1$cchar exec[80];%1$c%1$cint main()%1$c{%1$c%2$cif (i > 0)%1$c%2$c{%1$c%2$c%2$cif (strlen(__FILE__) != 7){i--;}%1$c%2$c%2$cFILE *fd;%1$c%2$c%2$csprintf(result, %3$cSully_%%d.c%3$c,i);%1$c%2$c%2$cfd = fopen(result, %3$cw+%3$c);%1$c%2$c%2$cchar *cpy = %3$c%7$s%3$c;%1$c%2$c%2$csprintf(exec, %3$cSully_%%d%3$c,i);%1$c%2$c%2$cfprintf(fd,cpy,10,9,34,i,name,result,cpy);%1$c%2$c%2$cfclose(fd);%1$c%2$c%2$csprintf(name, %3$cgcc -Wall -Wextra -Werror -o %%s %%s%3$c, exec, result);if (i > 0)%1$c%2$c%2$c{%1$c%2$c%2$c%2$csystem(name);%1$c%2$c%2$c%2$csprintf(result, %3$c./%%s%3$c,exec);%1$c%2$c%2$c%2$csystem(result);%1$c%2$c%2$c}%1$c%2$c}%1$c%2$creturn(0);%1$c}";
		sprintf(exec, "Sully_%d",i);
		fprintf(fd,cpy,10,9,34,i,name,result,cpy);
		fclose(fd);
		sprintf(name, "gcc -Wall -Wextra -Werror -o %s %s", exec, result);
		if (i > 0)
		{
			system(name);
			sprintf(result, "./%s",exec);
			system(result);
		}
	}
	return(0);
}