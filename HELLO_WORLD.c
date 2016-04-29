#include "types.h"
#include "stat.h"
#include "user.h"
//#include <stdio.h>
//#include <sys/wait.h>

int main()
{
    printf(1, "Hello World\n");
    // printf("Hello World\n");
    int pid = fork();
    printf(1,"Hello World %d \n", pid);
    wait();
    return 0;
}