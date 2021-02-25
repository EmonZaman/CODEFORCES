#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

      string s;
      cin>>s;
      string s1;

      cin>>s1;
      int c=1;
     int j=0;

      for(int i=s1.length()-1;i>=0;i--)
      {
         if(s[j]!=s1[i])
         {
             cout<<"NO"<<endl;
             c=0;
             break;
         }
         j++;
      }
        if (c==1)
        cout<<"YES"<<endl;









}

