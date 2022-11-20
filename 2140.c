#include<stdio.h>
int main()
{
    int a,b,k;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if (a==0 && b==0)
            break;
        else
            {
            k=b%a;
            if(k != 0)
                printf("possible\n");
            else
                printf("impossible\n");
            }
        }

    return 0;
}
