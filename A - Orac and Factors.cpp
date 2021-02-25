#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(n%2==0)
            cout<<n+(2*k)<<endl;
        else
        {
            int check=1;
            for(int i=n;i>1;i--)
            {
                if(n%i==0)
                    check=i;

            }
            cout<<(n+check)+(2*(k-1))<<endl;
        }
    }
}
