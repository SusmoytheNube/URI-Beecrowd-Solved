#include<stdio.h>
int main()
{
    int a,t,i,x,l,c,d,m,j;
    while(scanf("%d",&t)!=EOF)
    {
        m=t%1000;
        t=t/1000;
        d=t%500;
        t=t/500;
        c=t%100;
        t=t/100;
        l=t%50;
        t=t/50;
        x=t%10;
        t=t/10;
        i=t%1;
        t=t/1;
    for(j=0;j<m;j++)
        printf("M");
    for(j=0;j<d;j++)
        printf("D");
    for(j=0;j<c;j++)
        printf("C");
    for(j=0;j<l;j++)
        printf("L");
    for(j=0;j<x;j++)
        printf("X");
    for(j=0;j<i;j++)
        printf("I");
    }

    return 0;

}
