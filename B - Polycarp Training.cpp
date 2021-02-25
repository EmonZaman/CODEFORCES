#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cnt=0,done=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=done)
        {
            cnt++;
            done++;
        }
    }
    printf("%d\n",cnt);
}

