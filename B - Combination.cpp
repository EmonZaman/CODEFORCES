#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    multiset<int>s;
    int counter=1;
    int sum=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b>0)
        {
            counter=counter+b-1;
            sum=sum+a;
        }
       else
       {
            s.insert(a);
       }

    }
    while(counter-- && !s.empty())
    {
        sum=sum+*s.rbegin();
        s.erase(s.find(*s.rbegin()));

        //counter--;
    }
    cout<<sum<<endl;

}
