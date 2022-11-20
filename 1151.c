#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0,fibo;
    scanf("%d",&n);

    if(n>0 && n<46)
        {
        while(c<n)
        {
            if(c<=1)
                fibo=c;
            else
            {
                fibo=a+b;
                a=b;
                b=fibo;
            }

            if(c<(n-1)){printf("%d ",fibo);}
            else{printf("%d\n",fibo);}
            c++;
        }}

    return 0;

}
