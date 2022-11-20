#include<stdio.h>
int main()
{
    int a,i,j;

    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            break;
        else
        {
        for(i=1;i<=a;i++)
        {
            for(j=i;j<=a;j++)
            {
                printf("1 ");
            }
            printf("\n");
        }
        }
    }
return 0;
}
