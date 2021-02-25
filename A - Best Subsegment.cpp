#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxx=-1,countt=0,ans=0;

    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        maxx=max(maxx,a[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==maxx)
        {
            countt++;
            ans=max(ans,countt);

        }
        else
            countt=0;
    }
    printf("%d\n",ans);
    return 0;


    }

