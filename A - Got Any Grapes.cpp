#include<stdio.h>
int main()
{
    int a,b,c,a1,b1,c1,d=0,e=0,f=0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d",&a1, &b1, &c1);
    if(a1>=a)
    {
       b1=(a1-a)+b1;
       d=1;
    }
     if(b1>=b)
    {
       c1=(b1-b)+c1;
         e=1;
    }
     if(c1>=c)
    {
          f=1;
    }
    if(d==1 && e==1 && f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

