#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <fcntl.h>
#include<errno.h>
#include<sys/wait.h>





int main(int argc,char*argv[])
{​​​​​​​


    int ret_value;
	int r;
    printf("Parent process id of the current process: %d\n",getppid());
    printf("The current parent process: %d\n",getpid());
    printf("Creating a Child process\n");
    ret_value = fork();


    if(ret_value < 0){​​​​​​​
        printf("Child process failed\n");
    }​​​​​​​


    else if(ret_value == 0){​​​​​​​
        printf("Inside Child Process\n");                                                                                      
		printf("The child process id chpid: %d\n",getpid());
        printf("The parent pid of child process %d is %d\n",getpid(),getppid());
        r=system("ls -l");
        return r;
}​​​​​​​
        sleep(20); 
}​​​​​​​

