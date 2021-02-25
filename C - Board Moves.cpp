#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int  input;


        cin>>input;
        long long int  a = (input+1)/2;

        unsigned long long int  ans = 0;
        for(int i=a-1;i>0;i--){
            ans+=((input-2)+i*2)*i;

            input-=2;
        }
        long long int  big = 0;
        for(int i = a-1;i>0;i--){
            big+=i;
        }
        big=big*2;

        ans=ans*2;
        unsigned long long int check=ans+big;
        cout<<check<<endl;
    }
    return 0;
}

