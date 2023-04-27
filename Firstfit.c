/*
      Aim - First Fit Algorithm

*/	

#include<stdio.h>
 
void main()
{
int bsize[10], psize[10], bno, pno, flags[10], allocation[10], i, j;
 
for(i = 0; i < 10; i++)
{
flags[i] = 0;
allocation[i] = -1;
}
printf("Enter no. of blocks: ");
scanf("%d", &bno);
printf("\nEnter size of each block: ");
for(i = 0; i < bno; i++)
scanf("%d", &bsize[i]);
 
printf("\nEnter no. of processes: ");
scanf("%d", &pno);
printf("\nEnter size of each process: ");
for(i = 0; i < pno; i++)
scanf("%d", &psize[i]);
for(i = 0; i < pno; i++)         //allocation as per first fit
for(j = 0; j < bno; j++)
if(flags[j] == 0 && bsize[j] >= psize[i])
{
allocation[j] = i;
flags[j] = 1;
break;
}
//display allocation details
printf("\nBlock no.\tsize\t\tprocess no.\t\tsize");
for(i = 0; i < bno; i++)
{
printf("\n%d\t\t%d\t\t", i+1, bsize[i]);
if(flags[i] == 1)
printf("%d\t\t\t%d",allocation[i]+1,psize[allocation[i]]);
else
printf("Not allocated");
}
}

/*
Output:

aiktc@aiktc:~/Documents$ gcc Exp8.c
aiktc@aiktc:~/Documents$ ./a.out
Enter no. of blocks: 4

Enter size of each block: 5
6
7
8

Enter no. of processes: 4

Enter size of each process: 2
3
4
5

Block no.	size		process no.		size
1		     5		        1		     2
2		     6		        2			 3
3		     7		        3			 4
4		     8		        4			 5
 


*/
