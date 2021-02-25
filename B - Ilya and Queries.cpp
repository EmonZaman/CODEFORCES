#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int a[n];
    a[1]=0;
    for(int i=1;i<s.length();i++)
    {
           if(s[i]== s[i-1])
           {
              a[i+1]=a[i]+1;

           }
           else
            a[i+1]=a[i];
    }

    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
      cout<<a[r]-a[l]<<endl;
    }
}

 
