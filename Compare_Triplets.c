#include<stdio.h>
int main()
{
    int i,ali=0,bob=0,ar[3],arr[3];
    scanf("%d%d%d",&ar[0],&ar[1],&ar[2]);
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    for(i=0;i<3;i++)
    {
        if(ar[i]>arr[i])
        {
            ali++;
        }
        else if(ar[i]<arr[i])
        {
            bob++;
        }
        else if(ar[i]=arr[i])
        {
            continue;
        }
    }
    printf("%d %d",ali,bob);
}