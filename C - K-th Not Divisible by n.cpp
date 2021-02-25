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
            int need=(k-1)/(n-1);
            int ans=k+need;
            cout<<ans<<endl;

        }
        return 0;


}
