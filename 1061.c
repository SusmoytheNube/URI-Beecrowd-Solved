#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,d,h,m,s;
    printf("Dia ");
    scanf("%d",&d1);
    scanf("%d %d %d",&h2,&m2,&s2);
    printf("Dia ");
    scanf("%d",&d2);
    scanf("%d %d %d",&h1,&m1,&s1);

    d=d2-d1;

    if(h1>h2)
    {   h=h1-h2;

        if(m1>m2)
        {   m=m1-m2;

            if(s1>s2)
            {s=s1-s2;}

            else
            {m=m-1;
            s1=s1+60;
            s=s1-s2;}
        }
        else
        {   h=h-1;
            m1=m1+60;
            m=m1-m2;

            if(s1>s2)
            { s=s1-s2;}

            else
            {m=m-1;
            s1=s1+60;
            s=s1-s2;}
        }
    }

    else
    {   d=d1-1;
        h1=h1+24;
        h=h1-h2;

        if(m1>m2)
        {
             m=m1-m2;

             if(s1>s2)
             {s=s1-s2;}

             else
             { m=m-1;
               s1=s1+60;
               s=s1-s2;}
        }
        else
         {   h=h-1;
             m1=m1+60;
             m=m1-m2;

             if(s1>s2)
            {s=s1-s2;}

            else
            {m=m-1;
             s1=s1+60;
             s=s1-s2;}
        }
    }


    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",d,h,m,s);
    return 0;

}
