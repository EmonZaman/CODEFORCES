#include<stdio.h>
int main()
{
    long long int t,a,b,k,sum,check,check1,sum1,ans;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        sum1=0;
        scanf("%lld %lld %lld",& a, &b, &k);
        if(k%2==0)
        {
            check=k/2;
        }
        else
        {
            check=k/2;
            check=check+1;
        }
        check1=k/2;
        for(int i=1;i<=check;i++)
        {
            sum=sum+a;
        }
        for(int i=1;i<=check1;i++)
        {
            sum1=sum1+b;
        }
        ans=sum-sum1;
        printf("%lld\n",ans);


    }
    return 0;

}
