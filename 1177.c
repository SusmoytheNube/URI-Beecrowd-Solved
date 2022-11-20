#include <stdio.h>
int main()
{
    int N[1000],a,i,j;
    scanf ("%d",&a);
    for(i=0,j=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;

        if(j==a)
            {j=0;}
    }
    return 0;
}
