#include<stdio.h>
int main()
{
    int a,al=0,ga=0,di=0;
    while (1)
    {
        scanf("%d",&a);
        if(a==1)
        {
            al++;
        }
        if(a==2)
        {
            ga++;
        }
        if(a==3)
        {
            di++;
        }
        if(a==4)
        {
            break;
        }
     }
     printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d",al,ga,di);
     return 0;
}
