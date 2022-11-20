#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,c[a],i;
    double d[a],max=8.0;
    for(i=0;i<a;i++)
     {
        scanf("%d%lf",&c[i],&d[i]);
        if(d[i]>max)
        {
            max=d[i];
            b=i;
        }
    }
    if(max<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",c[b]);
    return 0;
}
