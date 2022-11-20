#include<stdio.h>
int main()
{
int count=0;
float a,sum=0,avr;
while(a!=2)
{
    scanf("%f",&a);
    if(a>0 && a<11)
    {
        sum=sum+a;
        count++;
    }
    if(count==2)
    {
        scanf("%f",&a);
        if(a>0 && a<11)
        {
            sum=sum+a;}
        else
        {
           printf("novo calculo (1-sim 2-nao)\n");
        }
    }
    else
        printf("nota invalida\n");


}
avr=sum/count;
printf("media = %.2f\n",avr);
return 0;
}
