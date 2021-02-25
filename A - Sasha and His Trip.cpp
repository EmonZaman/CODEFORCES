#include<stdio.h>
int main()
{
    int n,v,i=2,c,n1;
    scanf("%d %d",&n,&v);
    if(v>=n)
    {
        printf("%d\n",n-1);
        return 0;
    }
    n1=n-1-v;
    c=v;
    for(i=2; ;i++)
    {
        if(n1--)
        {
            c=c+i;
        }
        else
        {
           printf("%d\n",c);
           return 0;
        }

    }

    return 0;
}
