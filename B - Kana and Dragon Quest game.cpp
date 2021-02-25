#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int in,n,m;
        cin>>in>>n>>m;
        int check=in;

        for(int i=1;i<=n+m;i++)
        {
          if(in<=0)
                break;
          if(i<=n)
          {
              if(in>20)
              in=(in/2)+10;
          }
          else
            in-=10;



        }
        //cout<<in<<endl;
        if(in<=0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}


