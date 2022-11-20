#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,c,count=0;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
        {
            for(i=1;i<=n;i++)
            {
                scanf("%d",&c);

                if(c>=a && c<=b)
                    {count++;}
        }
        }
    printf("%d\n",count);
    return 0;
}
