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
        int a[n];
        int c=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                a[i]++;
                c++;

            }
            sum=sum+a[i];
          //  cout<<sum<<endl;
        }
        if(sum!=0)
            cout<<c<<endl;
        else
            cout<<++c<<endl;
    }



}
