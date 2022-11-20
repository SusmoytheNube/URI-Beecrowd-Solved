#include<stdio.h>
int main()
{
    double n,a=0.0;
    scanf("%lf",&n);
    while(n--)
    {
        a+=2.0;
        a=1.0/a;
    }
    a+=1.0;
    printf("%0.10lf\n",a);
    return 0;
}
