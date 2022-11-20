#include<stdio.h>
int main()
{
    int a,n1,rem,sum=0,count=0;
    scanf("%d",&a);
    n1=a;
    while(n1!=0)
    {
        rem=n1%10;
        sum=(sum*10)+rem;
        n1=n1/10;
        count++;
    }
    if(a==sum)
    printf("palindrome\n");

    else
        printf("Not palindrome\n");

    printf("num of degit %d",count);
    return 0;
}
