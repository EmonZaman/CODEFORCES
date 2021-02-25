#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin>>t;
    ll sum=0;
    ll sum1=0;
    ll sum2 =0;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sum+=x;
        sum1+=y;
        sum2+=z;

    }
    if(sum==0 and sum1==0 and sum2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
