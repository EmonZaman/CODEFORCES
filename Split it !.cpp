#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >>t;
  while(t--)
  {
    int n, k, cnt=0;
    string s;
    cin >> n>> k>> s;
    for(int i=0; i<(n-i-2); ++i)
    {
      if(s[i]==s[n-i-1]) cnt++;
      else break;
    }
    (cnt>=k)? cout << "YES\n":cout<<"NO\n";
  }
}
