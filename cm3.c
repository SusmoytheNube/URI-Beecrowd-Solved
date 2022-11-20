#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j=0;
    char c[100];
    scanf("%d",&a);
    if(1 <= a && a <=10000)
    {
        for(i=1;i<=a;i++)
        {
            gets(c);
            strupr(c);

            printf("Case %d: %s\n",i,strupr(c));
        }
    }


    return 0;
}
