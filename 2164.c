#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    double s1=1.0,s2=1.0,s3,x;

    scanf("%d",&a);

     x = sqrt(5);

    for(i=1;i<=a;i++)
    {
        s1= s1 * ((1 + x)/2);
        s2= s2 * ((1 - x)/2);
    }
    s3 = (s1 - s2)/x ;

    printf("%0.1lf\n",s3);

    return 0;
}
