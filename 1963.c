#include<stdio.h>
int main()
{
    double a,b,s;
    scanf("%lf%lf",&a,&b);
    s=((b-a)/a)*100;
    printf("%.2lf%%",s);
    return 0;
}
