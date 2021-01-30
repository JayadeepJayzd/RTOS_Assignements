#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX 3

int SplitNm(int ArmStrong)
{
    int sum[MAX], mod, t_sum = 0;
    for (int i = 0; i < MAX; i++) {
        mod = ArmStrong % 10;
        sum[i] = sum[i] + mod;
        sum[i] = sum[i] * sum[i] * sum[i];
        t_sum += sum[i];
        ArmStrong = ArmStrong / 10;
    }
    return t_sum;
}

int main(int argc, char *argv[]) 
{
    if (argc > 2) {
        printf("Usage: pass the 3 digit number to check if its armstrong\n");
        exit(1);
    }
    int num = atoi(argv[1]);
    int ans = SplitNm(num);
    printf("Armstrong = %d\n", ans); 

    printf("Parrent process ID = %d\n", getpid());
    
    int fd[2];
    int pip = pipe(fd);
    int pid = fork();
    if(pid < 0) {
        printf("Child not created\n");
        return 1;
    }

    if ((pid == 0) && (num == ans)){
        close(fd[0]);
        int c_ans = 0;
        printf("Child process ID = %d\n", getpid());         
        c_ans = ans * ans;
        printf("ans in child = %d\n", c_ans);
        write(fd[1], &c_ans, sizeof(c_ans));
        sleep(1);
        close(fd[1]); 
    }
    else {
        wait(NULL);
        close(fd[1]);
            
        int op_of_child;
            
        read(fd[0], &op_of_child, sizeof(op_of_child));    
        close(fd[0]);
        printf("Back in Parrent process (PID=%d)\n", getpid());
        printf("The square of armstrong is %d\n", op_of_child);
    }
    return EXIT_SUCCESS;
}