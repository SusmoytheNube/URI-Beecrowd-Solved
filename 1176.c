#include<stdio.h>
int main()
{
    int a,i,j;
    unsigned long long int b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%llu",&b);
        if(b>=0 && b<=60)
        {
            unsigned long long int f[61];
            f[0]=0;
            f[1]=1;

            for(j=2;j<61;j++)
            {
                f[j]=f[j-1] +f[j-2];
            }
            printf("Fib(%llu) = %llu\n",b,f[b]);
        }
    }
    return 0;
}
