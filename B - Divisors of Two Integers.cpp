#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,k;

    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&k);
        v.push_back(k);
    }


    sort(v.begin(), v.end());
    cout<< v.back() << " ";


    for(int i=n-2; i>0; i--)
    {
        if(v[n-1]%v[i]!=0)
        {
            cout<<v[i]<<endl;
            return 0;
        }


    }
    for(int i=n-2;i>=0;i--)
    {
        if(v[i] == v[i+1])
        {
            cout<<v[i]<<endl;
            return 0;
        }
    }

}

