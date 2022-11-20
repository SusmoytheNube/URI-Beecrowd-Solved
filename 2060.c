#include<stdio.h>
int main()
{
int a,b,i,c=0,d=0,e=0,f=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    scanf("%d",&b);
    if(b%2==0)
        c++;
    if(b%3==0)
        d++;
    if(b%4==0)
        e++;
    if(b%5==0)
        f++;
}

printf("%d Multiplo(s) de 2\n",c);
printf("%d Multiplo(s) de 3\n",d);
printf("%d Multiplo(s) de 4\n",e);
printf("%d Multiplo(s) de 5\n",f);
return 0;
}
