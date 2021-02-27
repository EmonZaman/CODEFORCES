#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,a,b,c;
        cin>>p>>a>>b>>c;
        cout<<min((a-p%a)%a, min((b-p%b)%b,(c-p%c)%c))<<endl;

    }
}
