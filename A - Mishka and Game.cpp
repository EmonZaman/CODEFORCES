#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,m=0,c=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b) m++;
        else if(b>a) c++;
    }
    if(m>c) cout<<"Mishka"<<endl;
    else if(c>m) cout<<"Chris"<<endl;


    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
