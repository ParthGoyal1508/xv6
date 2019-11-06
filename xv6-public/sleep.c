#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int pid = fork();
    if(pid<0){
        printf(1,"Error in forking");
    }
    if (pid == 0)
    {
        for (double i = 0; i < 100000*atoi(argv[1]); i += 0.01)
        {
            //
        }
        exit();
    }
    if(pid > 0){
        printf(1,"process with pid equal to %d started.\n",pid);
        exit();
    }
}
