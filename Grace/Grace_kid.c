/*COUCOU*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#define TOTO main

int TOTO()
{
	int fd;
	fd = open("Grace_kid.c", O_WRONLY | O_CREAT, 0644);
	dup2(fd, 1);
	char*c="/*COUCOU*/%1$c#include <stdio.h>%1$c#include <sys/types.h>%1$c#include <sys/stat.h>%1$c#include <unistd.h>%1$c#include <fcntl.h>%1$c#define TOTO main%1$c%1$cint TOTO()%1$c{%1$c%2$cint fd;%1$c%2$cfd = open(%3$cGrace_kid.c%3$c, O_WRONLY | O_CREAT, 0644);%1$c%2$cdup2(fd, 1);%1$c%2$cchar*c=%3$c%4$s%3$c;%1$c%2$cclose(fd);%1$c%2$cprintf(c,10,9,34,c);%1$c}%1$c";
	close(fd);
	printf(c,10,9,34,c);
}
