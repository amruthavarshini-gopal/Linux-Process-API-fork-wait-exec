#include <stdio.h>
#include <stdlib.h>
int main()
{
int pid;
pid=fork();
if(pid == 0)
{
printf("I am child my pid is %d\n",getpid());
printf("My parent pid is:%d\n",getppid());
exit(0);
}
else
{
printf("I am parent my pid is %d\n",getpid());
sleep(100);
exit(0);
}
}
