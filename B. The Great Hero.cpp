#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int attack,power,n;
        cin>>attack>>power>>n;
        long long int a[n],b[n],temp=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
        {
            long long total=a[i]*(long long)ceil((double)b[i]/(double)attack);
            power-=total;
            temp=max(temp,a[i]);
        }
        if(power+temp<=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}


