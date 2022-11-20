#include<stdio.h>
int main ()
{
    int a,b,i,j,s=0;
    scanf("%d%d",&a,&b);

    for(i=1;s<b;i++)
    {
        s++;
        if(s%a==0)
        {
            printf("%d",i);
            printf("\n");
        }
        else printf("%d ",i);


    }
    return 0;
}
