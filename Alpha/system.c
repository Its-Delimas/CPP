#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int global_var = 30;

int main(void)
{
  int local_var = 40;
  pid_t pid;

  printf("process creation has started\n");

  pid = fork();
  if (pid < 0)
  {
    perror("process creation failed");
    return 1;
  }
  else if (pid == 0)
  {
    printf("[Child process: %d]\n", (int)getpid());
    printf("Parent process (from child): %d\n", (int)getppid());
    printf("child process is running\n");
    sleep(2);
    printf("Child process has been terminated\n");
    exit(0);
  }
  else
  {
    printf("[Parent process: %d] created child %d\n", (int)getpid(), (int)pid);
    wait(NULL);
    printf("Parent detected child %d exit; parent exiting\n", (int)pid);
  }

  return 0;
}