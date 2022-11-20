#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char ch[10];
    scanf("%d %d",&a,&b);
    int diff=a;
    while(b--)
    {
        scanf("%s",ch);
        if(ch[0] == 'f')
            diff++;
        else
            diff--;
    }
    printf("%d\n",diff);
    return 0;
}
