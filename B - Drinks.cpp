#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,sum=0.000;
    cin>>t;
    double check=t;
    while(t--)
    {
        cin>>n;
        sum=sum+n;
    }
    cout<<sum/check<<endl;
}

