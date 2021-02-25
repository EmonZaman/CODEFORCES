#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans;
        if( m==1)
        {
            if(n%2==0)
            cout<<n/2<<endl;
            else
                cout<<n/2+1<<endl;
            continue;
        }
        else
        {
            int c=m/2;
            ans=c*n;
            if(m%2!=0)
            {
                 if(n%2==0)
                    ans+=n/2;
                 else
                    ans+=n/2+1;
            }


        }
        cout<<ans<<endl;

    }


}

