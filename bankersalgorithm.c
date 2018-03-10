//this consist only input for the process
#include<stdio.h>
void main()
{
int allocation[10][5],max[10][5],need[10][5],available[3],flag[10],sq[10];
int n,r,i,j,k,count,count1=0;
printf("\n Input the number of processes u want");
scanf("%d",&n);
for(i=0;i<10;i++)
flag[i]=0;
printf("\n Input the number of resources u want.");
scanf("%d",&r);

printf("\n Input the no. of available instances of each resource\n");
for(i=0;i<r;i++)
{
    printf("\n Resource %d : ",i);
    scanf("%d",&available[i]);
}

printf("\n Input the allocation matrix for the processess\n");
for(i=0;i<n;i++)
{
    printf("\n Process %d\n",i);
    for(j=0;j<r;j++)
    {
        printf("\n Resource %d\n",j);
        scanf("%d",&allocation[i][j]);
    }
}
printf("\n Input the no. of resources that a process can maximum have\n");
for(i=0;i<n;i++)
{
    printf("\n Process %d\n",i);
    for(j=0;j<r;j++)
    {
        printf("\n Resource %d\n",j);
        scanf("%d",&max[i][j]);
    }
}
getch();

}