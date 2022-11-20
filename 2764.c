#include <stdio.h>
int main()
{
    int d,m,y;
    scanf("%d",&d);
    printf("/");
    scanf("%d",&m);
    printf("/");
    scanf("%d",&y);

    printf("%d/%d/%d\n",m,d,y);
    printf("%d/%d/%d\n",y,m,d);
    printf("%d-%d-%d\n",d,m,y);
    return 0;
}
