#include <stdio.h>
int main()
{
    double a=0.0,M[12][12];
    char t[2];
    int c,x,y;
    scanf("%d",&c);
    scanf("%s",&t);

    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if(x==c)
            a+=M[x][y];
        }
    }

    if(t[0]=='S')
        printf("%.1lf\n",a);

    else if(t[0]=='M')
    {
        a=a/12;
        printf("%.1lf\n",a);
    }
    return 0;
}

