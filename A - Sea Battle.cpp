#include<bits/stdc++.h>
using namespace std;



int main()
{

    long long int w1, h1, w2, h2;
    cin>>w1>>h1>>w2>>h2;
    long long int ans;
    if(w1>w2)
    {
        ans= w1+ (h1*2)+ (h2*2)+w2+(w1-w2)+4;

    }
    else
    {
        ans= w1+ (h1*2)+ (h2*2)+w2+4;
    }
    cout<<ans<<endl;
    return 0;
}
