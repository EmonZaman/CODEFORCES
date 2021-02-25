#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2];
        int c2=0,c1=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c1++;
            else
                c2++;
        }

        if(c1%2==0 and c2%2==0)
            cout<<"YES"<<endl;
        else if(c1%2==0 and c1>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
