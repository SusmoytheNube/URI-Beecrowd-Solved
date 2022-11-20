#include<stdio.h>
int main()
{
int a,b,i;
char c[200];
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    scanf("%s %d",&c,&b);
    if(c[0]=='T' && c[1]=='h' && c[2]=='o' && c[3]=='r')
        printf("Y\n");
    else printf("N\n");
    }
    return 0;
}

