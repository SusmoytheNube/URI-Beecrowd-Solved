#include<stdio.h>
int main()
{
    int n,tmp=0,a,c=0,ans=0,cn=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        c++;
        if(a<tmp && cn==1)
        {
            ans=c;
            cn = 0
        }
        tmp=a;
    }
    printf("%d\n",ans);
    return 0;
}
