#include<stdio.h>
int main()
{
int count=0;
float a,sum=0,avr;
while(count!=2)
{
    scanf("%f",&a);
    if(a>0 && a<11)
    {
        sum=sum+a;
        count++;
    }
    else
        printf("nota invalida\n");
}
avr=sum/count;
printf("media = %.2f\n",avr);
return 0;
}
