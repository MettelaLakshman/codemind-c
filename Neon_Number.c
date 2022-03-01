#include<stdio.h>
int main()
{
    int a,b,rem=0,sum=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
    	rem=b%10;
    	sum=sum+rem;
    	b=b/10;
	}
	if(sum==a)
	{
		printf("Neon Number");
	}   
	else 
	{
		printf("Not Neon Number");
	 } 
		
}