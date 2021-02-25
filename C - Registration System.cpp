#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    map<string,int>m;
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1)

            cout<<"OK"<<endl;
        else
        {
            cout<<s;
              cout<<m[s]-1<<endl;
        }


    }
    return 0;

}


