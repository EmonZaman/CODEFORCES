#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

        ll n,k;
        cin>>n>>k;
        int cnt=1;
        int sum=0;
        for(int i=5;i<=100 ;i+=5)
        {
            sum+=i;
            int check=k+sum;
           // cout<<check<<" ";
            if(check>240)
            {
                cout<<--cnt<<endl;
                break;
            }
            if(cnt==n)
            {
                cout<<n<<endl;
                break;

            }


             cnt++;

        }





}

