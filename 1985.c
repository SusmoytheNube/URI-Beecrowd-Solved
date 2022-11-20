#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    double d=0.00;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&c);
        if(b==1001)
        {
                d=d + c*1.50;
        }
        if(b==1002)
        {
                d=d + c*2.50;
        }
        if(b==1003)
        {
                d=d + c*3.50;
        }
        if(b==1004)
        {
               d=d + c*4.50;
        }
        if(b==1005)
        {
               d=d + c*5.50;
        }
    }
    printf("%0.2lf\n",d);
    return 0;
}
