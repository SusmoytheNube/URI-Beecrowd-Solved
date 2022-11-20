#include <stdio.h>
int main()
{
    double a=0.0,m[12][12];
    int i,y,count=0;

    char c[2];

    scanf("%s",&c);

    for(i=0;i<=11;i++)
    {
        for(y=0;y<=11;y++)
        {
            scanf("%lf",&m[i][y]);

        if(i>y){
            a+=m[i][y];
            count++;}
        }
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
