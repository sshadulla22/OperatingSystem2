/*
                                                 Experiment No.: 9
                                                                                                                       
                                                                                         @learner   
                                                                                         NAME: Soban Wajuddin Maruf
                                                                                         ROLL NO. : 21co58
                                                                                         BATCH : 3
                                                                                         SEM - 4


                                    AIM : Implementation of Page Replacement Algorithm'.



Algorithm:


    1. Start the process

    2. Declare the size with respect to page length

    3. Check the need of replacement from the page to memory

    4. Check the need of replacement from old page to new page in memory

    5. Forma queue to hold all pages

    6. Insert the page require memory into the queue

    7. Check for bad replacement and page fault

    8. Get the number of processes to be inserted

    9. Display the values

    10. Stop the process

*/

// Program:
#include <stdio.h>
int main()
{
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;
    printf("\nEnter the number of pages:: ");
    scanf("%d", &n);
    printf("\nEnter the page number::\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the number of frames:: ");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
        frame[i] = -1;
    j = 0;
    printf("\n\nRef String\t\tPage Frames\n\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t", a[i]);
        avail = 0;
        for (k = 0; k < no; k++)
            if (frame[k] == a[i])
                avail = 1;
        if (avail == 0)
        {
            frame[j] = a[i];
            j = (j + 1) % no;
            count++;
            for (k = 0; k < no; k++)
                printf("%d\t", frame[k]);
        }
        printf("\n");
    }
    printf("\nPage Fault Is %d\n", count);
    return 0;
}


/*

Output:

aiktc@aiktc:~/Desktop/21CO34$ gcc Exp9.c
aiktc@aiktc:~/Desktop/21CO34$ ./a.out

Enter the number of pages:: 5

Enter the page number::
10
20
30
40
50

Enter the number of frames:: 5


Ref String              Page Frames

10              10      -1      -1      -1      -1
20              10      20      -1      -1      -1
30              10      20      30      -1      -1
40              10      20      30      40      -1
50              10      20      30      40      50

Page Fault Is 5

aiktc@aiktc:~/Desktop/21CO34$

Conclusion : Thus, we have successfully demonstrated the concept of page replacement policies for handling page faults eg: FIFO, LRU etc.
*/
