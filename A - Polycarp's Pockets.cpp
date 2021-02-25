
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int>::iterator it;

    for(int i=0;i<n;i++)
    {
        int n1;
        cin>>n1;
        m[n1]++;

    }
    int mx=-100;
     for(it=m.begin();it!=m.end();it++)
    {
       mx=max(mx,it->second);


    }
     cout<<mx<<endl;
}
