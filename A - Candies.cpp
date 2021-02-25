#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int check=3;

         for(int i=2;i<i+2;i++)
         {
             if(n%check==0)
             {
                 cout<<n/check<<endl;
                 break;
             }
             else
                check=check+pow(2.0,i);
         }
    }
    return 0;


}
