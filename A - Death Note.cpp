#include<stdio.h>
int main()
{
    long long int n,m,ans,temp,temp1=0;
    scanf("%lld %lld",&n, &m);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&temp);
        temp=temp1+temp;
        //printf("temp=%lld\n",temp);
        ans=temp/m;
        printf("%lld ",ans);
        temp1=temp%m;
    }
    return 0;
}

