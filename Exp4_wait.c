/*
                                        Experiment No : 4_2

                                                                            NAME: Soban Maruf
                                                                            ROLL NO. : 21co58
                                                                            BATCH : 3
                                                                            SEM - 4

      Aim - Create a child process in Linux using the wait system call.
            From the child process obtain the process ID of both child and parent by using getpid and getppid system call.

*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    // fork() Create a child process

    int pid;
    pid = fork();

    if (pid > 0)
    {
        wait(NULL);
        printf("\n Before fork");
        printf("\n Hi, My Name is Soban Maruf");
        printf("\n The Parent Process ID is :- %d", getppid());
        printf("\n Parent Process exexuted successfully \n");
    }
    else if (pid == 0)
    {

        printf("\n After fork");
        printf("\n Hi, My Name is Soban Maruf");
        printf("\n The New Child Process Created by fork system call %d \n", getpid());
    }
    return 0;
}

/*

Output :

After fork
 Hi, My Name is Soban Maruf
 The New Child Process Created by fork system call 8584 

 Before fork
 Hi, My Name is Soban Maruf
 The Parent Process ID is :- 8556
 Parent Process exexuted successfully 

*/

/*

Conclusion :
      Hence, We have Successfully learned and Created a child process in Linux using the wait system call.

*/
