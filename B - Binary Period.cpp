#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string t1;
        cin>>t1;
        int c=0;
        int c1=0;
        for(int i=0; i<t1.length(); i++)
        {
            if(t1[i]=='0')c++;
            else c1++;

        }
        if(c==t1.length())
        {
            for(int i=0; i<t1.length()*2; i++)
            {
                cout<<"0";


            }

        }
        else if(c1==t1.length())
        {
            for(int i=0; i<t1.length()*2; i++)
            {
                cout<<"1";


            }

        }
        else
        {
            for(int i=0; i<t1.length()*2; i++)
            {
                if(i%2==0)
                    cout<<"1";
                else
                    cout<<"0";


            }
        }
        cout<<endl;

    }
}

