#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        cin>>s;
        cin>>s1;
        cin>>s2;
        int c=0;
        int n=s.length();

        for(int i=0; i<n; i++)
        {
            c++;

            if(s1[i]==s2[i])
            swap(s[i],s2[i]);

            else if(s[i]==s2[i])
            swap(s1[i],s2[i]);


            else
            {


            c--;
            break;
            }

        }


        if(s==s1 && (c==n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



}
