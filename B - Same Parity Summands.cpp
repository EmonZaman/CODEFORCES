#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{


        int t;
        cin>>t;
        while(t--)
        {
            ll n,k;
            cin>>n>>k;
            ll one = 0,two = 0;
            vector<ll> v;
            for(int i=0; i<k-1; i++)
            {
                one++;
                v.push_back(1);
            }
            ll a = n - one;
            v.push_back(a);
            if(a%2 and a>0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k;i++)
                cout<<v[i]<<" ";
                cout<<endl;
                continue;
            }
            v.clear();
            for(int i=0; i<k-1; i++)
            {
                two +=2;
                v.push_back(2);
            }
            ll b = n - two;
            v.push_back(b);
            if(b%2==0 and b>0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k;i++)
                cout<<v[i]<<" ";
                cout<<endl;
                continue;
            }
            cout<<"NO"<<endl;
        }
        return 0;



}
