#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;
    string str;
    int c=0;
    for(int i=0; i<5; i++)
    {
        cin>>str;
        if(str[0]==s[0]||str[1]==s[1])
            c=1;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
