#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int check=-1,c=1;
     for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
       //cout<<a[i]<<endl;
        if(a[i+1]>=a[i])
        {
           // cout<<a[i]<<endl;
            c++;
           // cout<<"c "<<c<<endl;
            if(c>check)
                check=c;
        }
        else
            c=1;

    }
    if(check==-1)
    {
        check=1;
         cout<<check<<endl;
         return 0;
    }

    cout<<check<<endl;

}
