#include<stdio.h>
int main()
{
    int x,j,num,i;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        int count=0;
        scanf("%d",&num);
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count++;
                break;}

        }
        if(count==0)
            printf("%d eh primo\n",num);
        else
            printf("%d nao eh primo\n",num);
    }
    return 0;
}
