#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    while(n--)
    {
        string s;
        cin>>s;
        if(m[s]==0)
        {
            cout<<"NO"<<endl;
                m[s]++;
        }
        else
            cout<<"YES"<<endl;

    }
}
