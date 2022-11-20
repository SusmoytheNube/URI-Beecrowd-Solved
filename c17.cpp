#include <stdio.h>
int main()
{
    int n, revInt = 0, rem, oInt;
    printf("Enter an integer: ");
    scanf("%d", &n);
    oInt = n;
    while( n!=0 )
    {
        rem = n%10;
        revInt = revInt*10 + rem;
        n /= 10;
    }
    if (oInt == revInt)
        printf("%d is a palindrome.", oInt);
    else
        printf("%d is not a palindrome.", oInt);
    
    return 0;
}
