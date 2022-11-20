#include<stdio.h>
int main()
{

    int a,n1,rem,sum=0;
    scanf("%d",&a);
    n1=a;
    while(n1!=0)
    {
        rem=n1%10;
        sum=sum+(rem*rem*rem);
        n1=n1/10;
    }
    if(sum==a)
    printf("Armstrong");

    else
        printf("Not Armstrong");
    return 0;
}
