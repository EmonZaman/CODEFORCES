#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=1;
        int ans=-1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                c++;
            else{
                ans=max(ans,c);
                c=1;
            }
        }
         ans=max(ans,c);
        cout<<ans<<endl;


    }
}

