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
        int c=0;
        int check=n/2;
        if(check%2!=0)
            cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;
           for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
            c++;

        }for(int i=1;i<n;i+=2)
        {
            if (i==(n-1))
                cout<<i+c<<endl;
            else
            cout<<i<<" ";

        }
       }


    }
}

