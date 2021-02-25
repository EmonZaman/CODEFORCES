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

        string s;
        cin>>s;
       int check=1;
        cout<<1;

        for(int i=0; i<n-1; i++)
        {
            if(n==1) break;
            if(s[i]=='0' and check==0)
            {
                cout<<1;
                check=1;
            }

            else if(((s[i]=='0' and check==1)or (s[i]=='1' and check==0)) and s[i+1]=='1' )
            {
                cout<<1;
                check=1;
            }
            else if(((s[i]=='0' and check==1)or (s[i]=='1' and check==0)) and s[i+1]=='0' )
            {
                cout<<0;
                check=0;
            }
             else if((s[i]=='1' and check==1) and s[i+1]=='0')
            {
                cout<<1;
                check=1;
            }
             else if((s[i]=='1' and check==1) and s[i+1]=='1')
            {
                cout<<0;
                check=0;
            }

        }
        cout<<endl;
    }
}

