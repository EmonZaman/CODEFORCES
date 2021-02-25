#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,c=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            cnt++;
            //cout<<s[i]<<endl;


        }
        else
        {
            if(cnt>=3)
            {
                ans=ans+(cnt-2);
                //cout<<ans<<endl;
            }
            cnt=0;
            c=1;
        }
    }
    if(cnt>=3)
    {
        ans=ans+(cnt-2);
    }
    cout<<ans<<endl;
}
