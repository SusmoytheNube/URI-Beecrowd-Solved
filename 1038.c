#include<stdio.h>
int main()
{
    int a,b;
    double t;

    scanf("%d",&a);
    scanf("%d",&b);

    if(a==1){t= 4*b;}

    else if(a==2){t =4.5 * b;}

    else if(a==3){t = 5.0 * b;}

    else if(a==4){t = 2.0 * b;}

    else {t = 1.5 * b;}

    printf("Total: R$ %.2lf\n",t);

    return 0;
}
