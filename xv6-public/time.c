#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc, char *argv[])
{

    int pid;
    int status = 0, a = 0, b = 0;
    pid = fork();
    if (pid != 0)
    {
        status = waitx(&a, &b);
    }
    else
    {
        exec(argv[1], argv);
        printf(1, "exec %s failed\n", argv[1]);
    }
    printf(1, "WaitTime = %d\n", a);
    printf(1, "RunTime = %d\n", b);
    printf(1, "Status = %d\n", status);
    exit();
}
