#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll sum=0;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            {
                int check=a/b;
                check++;
                sum=b*check;
                cout<<sum-a<<endl;
            }

    }
    return 0;




}

