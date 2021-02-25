#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int a[t];
    while(t--)
    {
        string s;
        cin>>s;
        int check=0,c=0;
        int n=s.length();

        if(s[s.length()-1]=='0')
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='0')
            check++;

                else
            {
                break;

            }

        }
        else
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1')
            check++;

                else
            {
                break;

            }

        }
        n=n-check;
       // cout<<n<<endl;
        check=1;
          if(s[0]=='0')
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0')
            check++;

                else
            {
                break;

            }

        }
         if(s[0]=='1')
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            check++;

                else
            {
                break;

            }

        }
        int start=check;
       // cout<<start<<endl;
        for(int i=start;i<n;i++)
        {
            if(s[i]=='0')
                c++;
        }
        cout<<c<<endl;




    }
}
