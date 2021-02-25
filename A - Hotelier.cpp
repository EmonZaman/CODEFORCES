#include<bits/stdc++.h>
using namespace std;
int a[12];
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0,c2=9;
    for(int j=0;j<n;j++)
    {
      if(s[j]=='L')
      {
         for(int i=0;i<n;i++)
         {
             if(a[i]==0)
             {
                 a[i]=1;
                 break;
             }
         }
      }
      else if(s[j]=='R')
      {
         for(int i=9;i>=0;i--)
         {
             if(a[i]==0)
             {
                 a[i]=1;
                 break;
             }
         }
      }
      else
      {
          a[s[j]-48]=0;
      }
      //  for(int i=0;i<10;i++)
      //  cout<<a[i];
     //   cout<<endl;
    }
    for(int i=0;i<10;i++)
        cout<<a[i];
}


