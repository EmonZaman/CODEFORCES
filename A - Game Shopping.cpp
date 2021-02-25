#include<stdio.h>
int main()
{
    int c[1001],a[10001],count=0,n,m;
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &c[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[count]>=c[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;


}

