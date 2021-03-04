#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll test,i,j;
	cin>>test;
	while(test--)
	{
		ll n,k;
		ll a=0,b=0,c=0;
		string s;
		cin>>s;
		n=s.size();
		for(i=0;i<n;i++)
		{
			if(s[i]==s[0])a++;
			else if(s[i]==s[n-1])b++;
		}
		if(a>b)
		{
			a=0;ll f=0;
			for(i=0;i<n;i++)
			{
				if(s[i]==s[0])a++;
				else a--;
				if(a<0){f=1;break;}
			}
			if(a>0)f=1;
			if(f==1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		}
		else if(b>=a)
		{
			a=0;ll f=0;
			for(i=0;i<n;i++)
			{
				if(s[i]!=s[n-1])a++;
				else a--;
				if(a<0){f=1;break;}
			}
			if(a>0)f=1;
			if(f==1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		}
		}
}
