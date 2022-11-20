#include <stdio.h>
#include<string.h>
int main()
{
    int a;
    char CH[600];
    gets(CH);

    a = strlen(CH);

    if(a>80)
    printf("NO\n");
    else
    printf("YES\n");
    return 0;
}
