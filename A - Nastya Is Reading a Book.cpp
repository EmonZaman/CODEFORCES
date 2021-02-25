#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
   // int mx=-1;
    int a[100000],i=0;
   while(n--)
   {
       int f,l;
       cin>>f>>l;
       a[i]=l;
       i++;
       //mx=max(mx,l);
   }
   int k;
   cin>>k;
   int j=0;
   int c=0;
   for( j=0;j<i;j++)
   {
       c++;
       if(k<=a[j])
       {
           c--;

           break;
       }

   }
   cout<<temp-c<<endl;

}
