#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int maximum=*max_element(a.begin(),a.end())-48;
    cout<<maximum<<endl;
    int c=0;
    for(int i=0;i<maximum;i++)
    {
        for(int j=0;j<a.length();j++)
        {
            if(a[j]>'0')
            {
                 cout<<"1";
            a[j]=a[j]-1;
            c=1;
            }
            else
                if(c==1)
            {
                cout<<"0";
            }

        }
        c=0;
        cout<<" ";

    }
    cout<<endl;
}
