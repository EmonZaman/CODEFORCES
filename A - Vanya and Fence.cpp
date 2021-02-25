#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,a;
    int w=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h) w++;
    }
    cout<<n+w<<endl;

    return 0;
}
