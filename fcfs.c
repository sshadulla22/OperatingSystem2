/*
                             AIM : Implementation of first come first serve algorithm.


*/

#include<stdio.h>
 
 int main()
 
{
    int n,bt[30],wait_t[30],turn_ar_t[30],av_wt_t=0,avturn_ar_t=0,i,j;
    printf("Please enter the total number of processes(maximum 30):");  // the maximum process that be used to calculate is specified.
    scanf("%d",&n);
 
    printf("\nEnter The Process Burst Time");
    for(i=0;i<n;i++)  // burst time for every process will be taken as input
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
 
    wait_t[0]=0;   
 
    for(i=1;i<n;i++)
    {
        wait_t[i]=0;
        for(j=0;j<i;j++)
            wait_t[i]+=bt[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        turn_ar_t[i]=bt[i]+wait_t[i];
        av_wt_t+=wait_t[i];
        avturn_ar_t+=turn_ar_t[i];
        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t\t%d",i+1,bt[i],wait_t[i],turn_ar_t[i]);
    }
 
    av_wt_t/=i;
    avturn_ar_t/=i;  // average calculation is done here
    printf("\nAverage Waiting Time:%d",av_wt_t);
    printf("\nAverage Turnaround Time:%d",avturn_ar_t);
 
    return 0;
}


/*
OUTPUT:

aiktc@aiktc:~/Downloads$ gcc Exp_5.c
aiktc@aiktc:~/Downloads$ ./a.out
Please enter the total number of processes(maximum 30):4

Enter The Process Burst TimeP[1]:1
P[2]:6
P[3]:8
P[4]:12

Process		Burst Time	Waiting Time	Turnaround Time
P[1]		1			0				1
P[2]		6			1				7
P[3]		8			7				15
P[4]		12			15				27
Average Waiting Time:5
Average Turnaround Time:12

*/
