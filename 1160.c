#include<stdio.h>
int main()
{
    int a,b,n,c,m;
    double ac,bc;

    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {

        scanf("%d%d%lf%lf",&a,&b,&ac,&bc);

        while(a<=b)
        {
            c=0;
            a*=(ac/100.0)+1.0;
            b*=(bc/100.0)+1.0;
            c++;
            if (a>b)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c<=100)
            printf("%d anos.\n",c);
    }
    return 0;
}
