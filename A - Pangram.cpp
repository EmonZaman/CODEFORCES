#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

        ll n,k;
        cin>>n;
        string s;
        cin>>s;

      vector<int>vec(200,0);

      for(int i=0;i<n;i++)
      {
          char c=tolower( s[i]);
          vec[c]=1;
      }
      int cnt=0;
      for(int i=97;i<124;i++)
      {
          if(vec[i]==1)
            cnt++;
      }
      if(cnt==26)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;








}

