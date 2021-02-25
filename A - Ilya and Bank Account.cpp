#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;

    }
    else
    {
        int temp=n;
        int second=n/100;

        int mod=n%10;
        second=(second*10)+mod;
        int first=temp/10;
        if(first>second)
            cout<<first<<endl;
        else
            cout<<second<<endl;
    }
}
 
