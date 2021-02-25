#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     int sf=0,f=0;
    scanf("%d",&n);
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='S' &&s[i+1]=='F')
            sf++;
        else if(s[i]=='F' && s[i+1]=='S')
            f++;
    }
    if(sf>f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

