
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int input;
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>input;
            s.insert(input);
        }

        if(s.size()>k)
        {
            cout<<"-1"<<endl;

        }
        else

        {
            int adjust=2;

            cout<<n*k<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j : s)
                {
                    cout<<j<<" ";

                }
                for(int l=s.size(); l<k; l++)
                    cout<<adjust<<" ";
            }
            cout<<endl;


        }

    }
}

