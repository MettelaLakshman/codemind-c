#include<stdio.h>
int main()
{
    int a,rem=0,sum=0,pro=1;
    scanf("%d",&a);
    while(a>0)
    {
        rem = a%10;
        a=a/10;
        sum=sum+rem;
        pro=pro*rem;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}