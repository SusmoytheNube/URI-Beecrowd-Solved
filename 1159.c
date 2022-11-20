#include<stdio.h>
int main()
{
int a,i;

while(1)
{
    int count=0,sum=0;
    scanf("%d",&a);

    if(a==0)
        {break;}

    else
        {
            if(a%2==0){
            for(i=1;i<=5;i++)
            {
                sum = sum+a;
                a+=2;
            }}

            else{
            a++;
            for(i=1;i<=5;i++)
            {
                sum = sum+a;
                a+=2;
            }}

            printf("%d\n",sum);
        }
}
return 0;
}
