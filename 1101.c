#include<stdio.h>
int main()
{
    int a,b,i;
    while(1)
    {
    scanf("%d %d",&a,&b);

    int sum=0;

    if(a>0 && b>0)
    {
        if (a>b)
        {
            for(i=b;i<=a;i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }

        else
        {
            for(i=a;i<=b;i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
     }

    else
    {
        printf("\n");
        break;}
    }

return 0;
}
