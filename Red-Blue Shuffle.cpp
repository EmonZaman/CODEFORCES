#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,count=0;cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
    	count+=s1[i]==s2[i]?0:s1[i]>s2[i]?1:-1;
	}
	count==0?cout<<"EQUAL":count>0?cout<<"RED":cout<<"BLUE";
	cout<<endl;
   }
   return 0;
}
