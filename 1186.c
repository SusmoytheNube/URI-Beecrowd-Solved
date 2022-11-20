#include <stdio.h>
int main()
{
    double a=0.0,m[12][12];
    int i,y,k,z,p=10;

    char c[2];

    scanf("%s",&c);

    for(i=0;i<=11;i++)
    {
        for(y=0;y<=11;y++)
        {
            scanf("%lf",&m[i][y]);}
    }
    for(z=1;z<=11;z++)
    {
        for(k=11;k>p;k--)
            {
            a+=m[z][k];
            }
        p--;
    }

    if(c[0]=='S')
        printf("%.1lf\n",a);

    else if(c[0]=='M')
    {
        a=a/66;
        printf("%.1lf\n",a);
    }
    return 0;
}
