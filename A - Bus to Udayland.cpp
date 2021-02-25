#include<bits/stdc++.h>
using namespace std;



int main()
{
   int n;
   string s;
   vector<string>v;
   cin>>n;
   int flg=0;
   while(n--)
   {
       cin>>s;
       if(flg==0)
       {
           if(s[0]=='O'&&s[1]=='O')
           {
               s[0]='+';
               s[1]='+';
               flg=1;
           }
           else if(s[3]=='O'&&s[4]=='O')
           {
               s[3]='+';
               s[4]='+';
               flg=1;
           }
       }
       v.push_back(s);
   }
   if(flg)
   {
       cout<<"YES"<<endl;
       for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
