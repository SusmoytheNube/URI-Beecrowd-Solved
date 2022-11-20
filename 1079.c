#include<stdio.h>
int main()
{
    int n,i,j;
    float a,b,c,avr,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        avr=((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n",avr);
    }
    return 0;
}
