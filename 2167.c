#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            printf("%d",j+1);

        }
        else
            continue;
    }

    return 0;
}

