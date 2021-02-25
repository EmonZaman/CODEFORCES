#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        int ans=n;
        while(n>=10)
        {
            int temp=n/10;
            n=n%10;
            c=c+temp;

            n=n+temp;
           //  cout<<n<<endl;
        }

       cout<<c+ans<<endl;
    }
}
