#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=-3;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(mx-a[i]);
    }
    cout<<sum<<endl;
}

