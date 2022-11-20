#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,N,A,i,j,count=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=1;j<=N;++j)
        {
            scanf("%d",&A);
            if(A == 1)
            {count++;}            
        }
        if(count>=9)
         {
            printf("Case %d:All hail to princess mAina\n",T);
         }
        else
        {
            printf("Case %d::'(\n",T);
        }
    }
    
    return 0;
}

