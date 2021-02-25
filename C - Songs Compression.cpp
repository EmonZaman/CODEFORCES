#include<stdio.h>

#include<algorithm>
using namespace std;
long long a[100000],b[100000],c[100000],sum1=0,sum2=0,ans=0,n,m,l,r,x=0;

int main()
{

    scanf("%lld %lld", &n, &m);
    while(x<n)
    {
        scanf("%lld %lld", &a[x], &b[x]);
        sum1=sum1+a[x];
        sum2=sum2+b[x];
        c[x]=b[x]-a[x];
        x++;

    }
    sort(c,c+n);
    while(sum1>m)
    {
        sum1=sum1+c[ans];
        ans++;
    }
    if(sum2>m)
    {
        printf("-1\n");
    }
    else
    printf("%lld\n",ans);
    return 0;
}

