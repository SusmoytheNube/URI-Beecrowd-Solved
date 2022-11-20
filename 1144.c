#include<stdio.h>
#include<string.h>
int main()
{
int a,b,c,i,j;
scanf("%d",&a);

for(i=1;i<=a;i++)
{
        b=i*i;
        c=b*i;
        printf("%d %d %d\n",i,b,c);
        printf("%d %d %d\n",i,b+1,c+1);

}
return 0;
}
