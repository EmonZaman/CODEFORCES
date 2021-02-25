#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        int l=a.size();


       if(a[l-1]==a[0])
        cout<<"-1"<<endl;
       else
        cout<<a<<endl;


    }
}

