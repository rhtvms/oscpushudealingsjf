#include<stdio.h>
 
void main()
{
    int burstime[20],p[20],wt[20],tat[20],x,y,n,total=0,pos,temp;
    float avgwt,avgtat;
    printf("Enter number of process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time:\n");
    for(x=0;x<n;x++)
    {
        printf("p%d:",x+1);
        scanf("%d",&bt[x]);
        p[x]=x+1;           //contains process number
    }
 
    //sorting burst time in ascending order using selection sort
    for(x=0;x<n;x++)
    {
        pos=x;
        for(y=x+1;y<n;y++)
        {
            if(bt[y]<bt[pos])
                pos=y;
        }
 
        temp=bt[x];
        bt[x]=bt[pos];
        bt[pos]=temp;
 
        temp=p[x];
        p[x]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;            //waiting time for first process will be zero
 
    //calculate waiting time
    for(x=1;x<n;x++)
    {
        wt[x]=0;
        for(y=0;y<i;y++)
            wt[x]+=bt[y];
 
        total+=wt[x];
    }
 
    avgwt=(float)total/n;      //average waiting time
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(x=0;x<n;x++)
    {
        tat[x]=bt[x]+wt[x];     //calculate turnaround time
        total+=tat[x];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[x],bt[x],wt[x],tat[x]);
    }
 
    avgtat=(float)total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}
