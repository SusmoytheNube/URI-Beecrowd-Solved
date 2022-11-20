#include<stdio.h>
int main()
{
    int a,i,sum=0,rem,n;
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        rem=n%10;

        int fact =1;

        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum +fact;
        n=n/10;
    }
    if(sum==a)
        printf("strong num");
    else
        printf("Not strong num");
    return 0;}
