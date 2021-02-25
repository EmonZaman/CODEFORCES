#include<stdio.h>
int main()
{
    int x[100000],y[100000],n,sum1=0,sum2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum1=sum1+x[i];
    }
     for(int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        sum2=sum2+y[i];
    }
     if(sum1>=sum2)
     {
         printf("Yes\n");

     }
     else
     {
         printf("No\n");
     }
    return 0;
}

