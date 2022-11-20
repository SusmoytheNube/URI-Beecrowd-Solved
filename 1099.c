#include <stdio.h>
int main()
{
    int n,a,b,j,i;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&a,&b);

        if(a>b)
        {int sum=0;
            for(i=(b+1);i<a;i++)
            {
                if((b+1)==a){
                    printf("%d\n",sum);
                    }

                if (i%2==1 || i%2==-1)
                    sum=sum+i;
            }
            printf("%d\n",sum);

        }
        if(b>a)
        {int sum=0;
            for(i=(a+1);i<b;i++)
            {
                if((a+1)==b){
                    printf("%d\n",sum);
                    }


                if (i%2==1 || i%2==-1)
                    sum=sum+i;
            }
            printf("%d\n",sum);

        }
        else{int sum=0;
        printf("%d\n",sum);
        }

    }

    return 0;
}
