#include <stdio.h>
int main()
{
    int a,b,i,c=0,d=0,e=0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);

        if(b>10)
            c++;
        else if(b>=20)
        {
            if(b>20)
                e++;
            else
                d++;
        }

    }
    if (e>0)
        printf("3");

    else if(d>0)
        printf("2");

    else
        printf("1");
    return 0;
}
