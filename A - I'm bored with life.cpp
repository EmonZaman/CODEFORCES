#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int minimum=min(a,b);
    int ans=1;
    for(int i=1;i<=minimum;i++)
        ans=ans*i;
    cout<<ans<<endl;
    return 0;

}

