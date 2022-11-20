#include<stdio.h>
int main()
{
    int a,l;
    char ch[10002];
    scanf("%d",&a);
    while(a--)
    {
        scanf("%s",ch);
        l=strlen(ch);
        printf("%.2lf\n",l*0.01);
    }
    return 0;
}
