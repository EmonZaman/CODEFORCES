#include<stdio.h>
int a[1000],b[1000];
int main()
{
    int n,m,l,r,count=0,c=0,k=0;
    scanf("%d %d", &n, &m);
    while(n--)
    {
        scanf("%d %d", &l, &r);
        for(int i=l; i<=r; i++)
        {
            a[i]=1;
        }
    }
    for(int i=1; i<=m; i++)
    {
          if(a[i]==0)
          {

              count++;
          }
    }
    printf("%d\n",count);
    for(int i=1; i<=m; i++)
    {
        if(a[i]==0)
        {
            printf("%d ",i);
        }

    }

    return 0;

}

