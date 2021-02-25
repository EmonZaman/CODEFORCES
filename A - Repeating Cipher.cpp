#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=1;
    for(int i=0;i<n; )
    {
        cout<<s[i];

        j++;
           i=i+j;
    }

}
