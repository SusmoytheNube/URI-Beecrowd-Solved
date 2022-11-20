#include <stdio.h>
int main()
{
    double a=0.0, m[12][12];
    char C[2];
    int c,x,y,z,p=0,q=4;
    scanf("%s", &C);

    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &m[x][y]);
    }
    for(z=1; z<11;z++)
    {
        if(z<=5)
        {
        for(c=p; c<=q;c++)
            {a+=m[z][c];
            p++;}
        }

        else if(z>=6)
        {
            for(c=p; c<=q;c++)
            {a+=m[z][c];
            q--;}
        }
    }
    if(C[0]=='S')
        printf("%.1lf\n",a);
    else if(C[0]=='m')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
