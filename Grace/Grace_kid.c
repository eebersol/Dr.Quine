/*COUCOU*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#define NAME "Grace_kid.c"
#define TOTO(x) int main() { int fd;fd = open("Grace_kid.c", O_WRONLY | O_CREAT, 0644);dup2(fd, 1);char*c="/*COUCOU*/%1$c#include <stdio.h>%1$c#include <sys/types.h>%1$c#include <sys/stat.h>%1$c#include <unistd.h>%1$c#include <fcntl.h>%1$c#define NAME %3$cGrace_kid.c%3$c%1$c#define TOTO(x) int main() { int fd;fd = open(%3$cGrace_kid.c%3$c, O_WRONLY | O_CREAT, 0644);dup2(fd, 1);char*c=%3$c%4$s%3$c;close(fd);printf(c,10,9,34,c);%1$c}%1$cTOTO(NAME);";close(fd);printf(c,10,9,34,c);
}
TOTO(NAME);