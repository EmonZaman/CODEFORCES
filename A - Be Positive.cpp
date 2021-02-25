#include<bits/stdc++.h>
using namespace std;

int main()
{
int x ;
cin>>x ;
int check1=0 , check2=0 ;
int value;
    for( int j =0 ; j<x ; j++)
    {
        cin>>value;

        if( value>0)
            check1++;
        else if(value<0)
            check2++;
    }
    x= (x+1)/2;
    if( x<=check1)
        cout<<1<<endl;
    else if(check2>=x)
        cout<<-1<<endl;
    else
        cout<<0<<endl;





    return 0;
}

