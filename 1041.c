#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);

    if(a==0 && b==0){printf("Origem\n");}

    else if(a==0 && b>0){printf("Eixo X\n");}

    else if(b==0 && a>0){printf("Eixo Y\n");}

    else if(a>0 && a<1){printf("Q1\n");}

    else if(a>1 && a<2){printf("Q2\n");}

    else if(a>2 && a<3){printf("Q3\n");}

    else{printf("Q4\n");}

    return 0;
}
