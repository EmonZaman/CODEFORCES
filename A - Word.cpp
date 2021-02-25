#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s;

    cin>>s;
    int c1=0,c2=0;
    for( int A = 0 ; A < s.size(); A++ )
    {
        if( s[A] >= 'A' && s[A] <= 'Z' )
        {
            c1++;
        }
        else
        c2++;
    }

    if( c2 >= c1 )
    {
        for( int A = 0 ; A < s.size(); A++ )
        {
            s[A] = tolower(s[A]);
        }
    }
    else
    {
         for( int A = 0 ; A < s.size(); A++ )
        {
            s[A] = toupper(s[A]);
        }
    }
    cout<<s<<endl;





}
