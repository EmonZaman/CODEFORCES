#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,c=1;
    cin>>a;
    string s,n;

    for(int i=0;i<a;i++){
        cin>>n;
        s+=n;
    }

    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) c++;
    }

    cout<<c<<endl;
    return 0;
}
