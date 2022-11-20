#include<stdio.h>
int main()
{

    double a,z,s,d,f,g,h,j,q,w,e,r,t,y,u;
    scanf("%.2lf",&a);

    s=a/100;
    a=a%100;
    d=a/50;
    a=a%50;
    f=a/20;
    a=a%20;
    g=a/10;
    a=a%10;
    h=a/5;
    a=a%5;
    j=a/2;
    a=a%2;
    q=a/1;
    a=a%1;
    /*a=z;
    w=z/.50;
    z=z%.50;
    e=z/.25;
    z=z%.25;
    t=z/.10;
    z=z%.10;
    y=z/.05;
    z=z%.05;
    u=z/.01;*/

    printf("NOTAS:\n");
    printf("%.2lf nota(s) de R$ 100.00\n%.2lf nota(s) de R$ 50.00\n%.2lf nota(s) de R$ 20.00\n%.2lf nota(s) de R$ 10.00\n%.2lf nota(s) de R$ 5.00\n%.2lf nota(s) de R$ 2.00",s,d,f,g,h,j,q);
    printf("MOEDAS:\n");
    printf("%.2lf moeda(s) de R$ 1.00\n%.2lf moeda(s) de R$ 0.50\n%.2lf moeda(s) de R$ 0.25\n%.2lf moeda(s) de R$ 0.10\n%.2lf moeda(s) de R$ 0.05\n%.2lf moeda(s) de R$ 0.01",w,e,t,y, u);


    return 0;

}
