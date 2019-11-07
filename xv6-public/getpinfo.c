#include "types.h"
#include "stat.h"
#include "user.h"
#include "procstat.h"

int main(int argc, char *argv[])
{

    int pid = atoi(argv[1]);
    struct proc_stat st;
    st.pid = pid;
    printf(1,"pid = %d\n", pid);
    int result = getpinfo(&st, pid);

    if(result == 1){
        printf(1,"Pid is %d\n",st.pid); 
        // printf("Runtime is %f\n",st->runtime); 
        printf(1,"Number of time process executed is %d\n",st.num_run); 
        printf(1,"Current queue is %d\n",st.current_queue); 
        for (int i = 0; i < 5; i++)
            printf(1,"Ticks in queue %d is %d\n",i,st.ticks[i]); 
    }
    else{
        printf(1,"error\n");
    }
    exit();
}
