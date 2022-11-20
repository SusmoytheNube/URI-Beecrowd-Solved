#include<stdio.h>
int main()
{
    int p;
    double a,n,rem;
    scanf("%lf",&a);

    if(a>=0.00 && a<= 400.00)
    {
        rem=a*0.15;
        n=rem+a;
        p=15;
    }
    else if(a>=400.01 && a<= 800.00)
    {
        rem=a*0.12;
        n=rem+a;
        p=12;
    }

    else if(a>=800.01 && a<= 1200.00)
    {

        rem=a*0.10;
        n=rem+a;
        p=10;
    }

    else if(a>=1200.01 && a<= 2000.00)
    {
        rem=a*0.07;
        n=rem+a;
        p=7;
    }

    else
    {
        rem=a*0.04;
        n=rem+a;
        p=4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",n,rem,p);
    return 0;
}
