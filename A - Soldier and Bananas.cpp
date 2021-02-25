#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=(i*k);

    }
    if(sum>n)
    cout<<sum-n<<endl;
    else
        cout<<"0"<<endl;
}

