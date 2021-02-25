#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    map <char,int> m1,m2;
    map <char,int>::iterator it,it2;
    for(int i=0;i<a.size();i++) m1[a[i]]++;
    for(int i=0;i<b.size();i++) m1[b[i]]++;
    bool ahs = true;
    for(int i=0;i<c.size();i++) m2[c[i]]++;
    //cout<<m1.size()<<" "<<m2.size()<<endl;
    for(it=m1.begin(),it2=m2.begin();it!=m1.end();it++,it2++){
        if(it->second!=it2->second) ahs = false;
    }
    if(m1.size()!=m2.size()) cout<<"NO"<<endl;
    else if(ahs) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
