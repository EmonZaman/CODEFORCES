
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
        int ans=0,check=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                check++;
            else
            {
                check--;
            }
            if(check<0)
            {
                ans++;
                check=0;
            }
        }
        cout<<ans<<endl;
    }

}

