
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    scanf("%d",&n);
    set<int>s;
    set<int> ::iterator it;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&value);
        s.insert(value);
    }
   // int c=0;
   if(s.size()==1)
        cout<<"NO"<<endl;
   else
   {
        s.erase(*(s.begin()));
       cout<<*(s.begin())<<endl;

   }









}


