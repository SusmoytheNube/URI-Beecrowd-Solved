#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("num of degit %d",count);
    return 0;
}
