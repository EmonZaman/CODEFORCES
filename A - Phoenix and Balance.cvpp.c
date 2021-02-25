#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=1;i<=n;i++)
        {
            a[i]=pow(2,i);
        }
        unsigned long long int sum1=0,sum2=0,sum3;

       sum1=sum1+a[n];
       for(int i=1;i<n/2;i++)
       {
           sum1=sum1+a[i];
       }
       for(int i=n/2;i<n;i++)
       {
           sum2=sum2+a[i];
       }
       if(sum1>sum2)
       cout<<sum1-sum2<<endl;
       else
       cout<<sum2-sum1<<endl;



    }
}
