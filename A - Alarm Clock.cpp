#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<endl;
        else
        {
            if(d>=c)
            {
                cout<<-1<<endl;
                continue;
            }
            a=a-b;
        long long int temp;
            if(a%(c-d)==0)
            temp=a/(c-d);
            else
            temp=(a/(c-d))+1;
           long long ans=b+temp*c;
            cout<<ans<<endl;


        }
    }
}

