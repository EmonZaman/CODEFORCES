#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((min(a,b)+min(c,d)==max(a,b))&& (max(a,b)==max(d,c)))
        {
            cout<<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;
    }
}

