#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,i=1;
    cin>>k>>r;
    while(1){
        if((k*i)%10==0 or (k*i)%10==r){
            break;
        }
        ++i;
    }
    cout<<i<<endl;
    return 0;
}
