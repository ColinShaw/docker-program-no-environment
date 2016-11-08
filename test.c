#include <sys/syscall.h>

char salute[] = "Please enter a short phrase to echo: ";
char prefix[] = "You entered: ";
char incoming[1000];
int  l;

#define PRINT_STRING(s)          syscall(SYS_write, 1, s, sizeof(s)-1);
#define PRINT_STRING_LENGTH(s,l) syscall(SYS_write, 1, s, l-1);
#define INPUT(s)                 syscall(SYS_read, 0, s, sizeof(s)-1);
#define EXIT(s)                  syscall(SYS_exit, s);
#define RETURN                   '\n';

void _start(void) {
    PRINT_STRING(salute);
    l = INPUT(incoming);
    incoming[l++] = RETURN;
    PRINT_STRING(prefix);
    PRINT_STRING_LENGTH(incoming, l);
    EXIT(0);
}
