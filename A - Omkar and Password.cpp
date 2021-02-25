#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>vec;

        for(int i=0; i<n; i++)
        {
            int in;
            cin>>in;
            vec.push_back(in);
        }
        sort(vec.begin(),vec.end());
        if(vec.front()==vec.back())
            cout<<n<<endl;
        else
            cout<<1<<endl;

    }
}

