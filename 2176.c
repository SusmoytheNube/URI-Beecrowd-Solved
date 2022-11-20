#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char ch[150];
    scanf("%s",ch);
    for(i=0;ch[i];i++)
    {
        if(ch[i]=='1')
            c++;
    }
    if(c%2 == 0)
        ch[i]='0';
    else
        ch[i]='1';

    ch[i+1] = '\0';
    printf("%s\n",ch);
    return 0;
}
