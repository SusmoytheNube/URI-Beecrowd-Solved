#include <stdio.h>
int main()
{
    int N,a,b,i,j,c=0;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&a,&b);

        if(a==b)
        {   c=0;
            printf("%d\n",c);
        }

        else if(a<b)
        {
            for(j=a+1,c=0;j<b;j++)
            {
                if(j%2==1||j%2==-1)
                    c+=j;
            }
            printf("%d\n",c);
        }

        else
        {
            for(j=b+1,c=0;j<a;j++)
            {
                if(j%2==1||j%2==-1)
                    c+=j;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
