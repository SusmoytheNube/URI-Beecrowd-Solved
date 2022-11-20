#include<stdio.h>
int main()
{
    int a,b,c[102],i,d=0,x;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=1;i<b;i++)
    {
        if(c[i]>c[i-1])
         x = (c[i] - c[i-1]);
        else
         x = (c[i-1] - c[i]);

        if(x <= a) d++;
    }

    if(d == b-1) printf("YOU WIN\n");
    else printf("GAME OVER\n");
    return 0;
}

