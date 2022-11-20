#include <stdio.h>
int main()
{
    double a=0.0,m[12][12];
    int i,j,count=0,p=11;

    char c[2];

    scanf("%s",&c);

    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf",&m[i][j]);

        if(j>i && j<p)
        {
            a+=m[i][j];
            count++;
        }}
        p--;
    }

    if(c[0]=='S')
        printf("%.1lf\n",a);

    else if(c[0]=='M')
    {
        a=a/count;
        printf("%.1lf\n",a);
    }
    return 0;
}
