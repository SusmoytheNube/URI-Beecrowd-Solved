#include<stdio.h>
int main()
{
    int i,j,t,a,b;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);

        int sum=0,count=0;
        if(a%2==1){
        for(j=1;j<=b;j++)
        {
            sum=sum+a;
            a+=2;
        }}
        else{
        a++;
        for(j=1;j<=b;j++)
        {
            sum=sum+a;
            a+=2;
        }}
        printf("%d\n",sum);

    }
    return 0;
}
