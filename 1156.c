#include<stdio.h>
int main()
{
    double i,j,k,sum=0;

    for(i=1,j=1;i<=39;i+=2,j*=2)
    {
        k=i/j;
        sum=sum+k;
    }
    printf("%0.2lf\n",sum);
    return 0;
}
