#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    set<int>s;
    int a[100001];
    int m,n;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        int value;
        scanf("%d",&value);
        v.push_back(value);
    }

    for(int i=v.size()-1;i>=0;i--)
    {
        s.insert(v[i]);
         a[i]=s.size();


    }

    for(int i=0;i<m;i++)
    {
        int check;
        scanf("%d",&check);
        printf("%d\n",a[check-1]);
    }
    return 0;
}
