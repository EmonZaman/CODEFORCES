#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    ll cnt=0;
    for(int i=1;i<=e;i++)
    {
        if(i%a==0 ||i%b==0 ||i%c==0 || i%d==0 )
        cnt++;

    }
    cout<<cnt<<endl;



}

