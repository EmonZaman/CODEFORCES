#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a>b)
    {
        //ans=ans+b;
        cout<<b<<" ";
        a=a-b;
        ans=(a/2);
        cout<<ans<<endl;
        return 0;

    }
      cout<<a<<" ";
        b=b-a;
        ans=(b/2);
        cout<<ans<<endl;
        return 0;
}

