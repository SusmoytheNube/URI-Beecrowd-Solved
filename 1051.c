#include<stdio.h>
int main()
{
    double a,n,n1,n2,rem;
    scanf("%lf",&a);
    if(a>=0.00 && a<=2000.00)
    {
        printf("Isento\n");
    }

    else if(a>=2000.01 && a<= 3000.00)
    {
        n1=a-2000;
        rem=n1*0.08;
        printf("R$ %0.2lf\n",rem);
    }
    else if(a>=3000.01 && a<= 4500.00)
    {
        n=a-2000;
        n1=n-1000;
        rem=(1000*0.08) + (n1*0.18);
        printf("R$ %0.2lf\n",rem);
    }

    else
    {
        n=a-2000;
        n1=n-1000;
        n2=n1-1500;
        rem=(1000*0.08) + (1500*0.18) + (n2*0.28);

        printf("R$ %0.2lf\n",rem);
    }
    return 0;
}
