#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t ppid = getppid();
printf("PID du processus parent : %d\n", ppid);
return (0);
}
