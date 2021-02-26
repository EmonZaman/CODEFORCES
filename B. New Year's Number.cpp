#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        int rem=n%2020;
        int check=n/2020;
        if(rem<=check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
