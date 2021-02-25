#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100001],s[100001],n,i,j,k,sum=0,sum1=0;
    scanf("%lld",&n);
    for(j=0;j<n;j++)
    {
        scanf("%lld",&s[j]);
        sum=sum+s[j];
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);

    }

    sort(a,a+n);
    sum1=a[n-1]+a[n-2];
   if(sum>sum1)
   {
       printf("NO\n");
   }
   else
   {
       printf("YES\n");
   }
    return 0;
}

