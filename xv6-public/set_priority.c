#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if (argc == 3 && (atoi(argv[2]) >= 0 && atoi(argv[2]) <= 100)) //argc = number of argument, argv[1] = pid, argv[2] = priority
    {
        printf(1, " pid=%d, pr=%d\n", atoi(argv[1]), atoi(argv[2]));
        set_priority(atoi(argv[1]), atoi(argv[2]));
        exit();
    }
    else if (argc == 3)
    {
        printf(2, "Invalid priority (0-100)!\n");
        exit();
    }
    else
    {
        printf(2, "usage: invalid arguments set_priority.\n");
        exit();
    }
    return 0;
}