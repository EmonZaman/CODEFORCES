#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int i=19,sum=0;
     for(int cnt=0;cnt<=4*n; )
     {

        int temp=i;
        sum=0;
         while(temp>0)
         {
             sum=sum+temp%10;
             //cout<<sum<<endl;
             temp=temp/10;
             //cout<<temp<<endl;
         }
         if(sum==10)cnt++;

         if(cnt==n)
         {
              cout<<i<<endl;
              return 0;

         }

           i=i+9;

     }
    //2 cout<<sum<<endl;
}
