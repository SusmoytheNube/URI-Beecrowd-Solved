#include <stdio.h>
int main()
{
    double a=0.0, m[12][12];
    char T[2];
    int c,x,y,z,p=6,q=5;
    scanf("%s", &T);

    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &m[x][y]);
    }
    for(z=7; z<=11;z++)
    {
        for(c=q; c<=p;c++)
            a+=m[z][c];
        p++;
        q--;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='m')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
