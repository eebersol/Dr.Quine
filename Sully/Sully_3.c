#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void sully_replicate(char c)
{
	c = c - 1;
	int fd;
	char *result = (char*)malloc(sizeof(char) * 50);
	char *execSully = (char*)malloc(sizeof(char) * 50);
	char *cpy="#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#include <fcntl.h>%1$c#include <sys/types.h>%1$c#include <sys/stat.h>%1$c#include <unistd.h>%1$c%1$cvoid sully_replicate(char c)%1$c{%1$c%2$cc = c - 1;%1$c%2$cint fd;%1$c%2$cchar *result = (char*)malloc(sizeof(char) * 50);%1$c%2$cchar *execSully = (char*)malloc(sizeof(char) * 50);%1$c%2$cchar *cpy=%3$c%s%3$c;%1$c%2$cstrcpy(result, %3$cSully_%3$c);%1$c%2$cstrncat(result, &c, 1);%1$c%2$cstrcat(result, %3$c.c%3$c);%1$c%2$cfd = open(result, O_WRONLY | O_CREAT, 0644);%1$c%2$cdup2(fd, 1);%1$c%2$cprintf(cpy,10,9,34,cpy);%1$c%2$cclose(fd);%1$c%2$cstrcpy(execSully, %3$cgcc -Wall -Wextra -Werror %3$c);%1$c%2$cstrcat(execSully, result);%1$c%2$cif (system(execSully) != -1)%1$c%2$c%2$csystem(%3$c./a.out%3$c);%1$c%2$celse%1$c%2$c%2$cwrite(1, %3$cNO%3$c, 3);%1$c}%1$c%1$cint main()%1$c{%1$c%2$cchar *fileName;%1$c%1$c%2$cfileName = __FILE__;%1$c%2$cif (fileName[6])%1$c%2$c{%1$c%2$c%2$cif (fileName[6] > 48 && fileName[6] <= 53 && fileName[6] - 1 > 48)%1$c%2$c%2$c%2$csully_replicate(fileName[6]);%1$c%2$c%2$celse%1$c%2$c%2$c%2$csully_replicate('5');%1$c%2$c}%1$c%2$creturn(0);%1$c}%1$c";
	strcpy(result, "Sully_");
	strncat(result, &c, 1);
	strcat(result, ".c");
	fd = open(result, O_WRONLY | O_CREAT, 0644);
	dup2(fd, 1);
	printf(cpy,10,9,34,cpy);
	close(fd);
	strcpy(execSully, "gcc -Wall -Wextra -Werror ");
	strcat(execSully, result);
	if (system(execSully) != -1)
		system("./a.out");
	else
		write(1, "NO", 3);
}

int main()
{
	char *fileName;

	fileName = __FILE__;
	if (fileName[6])
	{
		if (fileName[6] > 48 && fileName[6] <= 53 && fileName[6] - 1 > 48)
			sully_replicate(fileName[6]);
		else
			sully_replicate('5');
	}
	return(0);
}
