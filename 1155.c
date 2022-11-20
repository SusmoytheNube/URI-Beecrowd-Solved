#include<stdio.h>
int main()
{
    double i,k,sum=0;

    for(i=1;i<=100;i++)
    {
        k=(1/i);
        sum=sum+k;
    }

    printf("%0.2lf\n",sum);
    return 0;

}

