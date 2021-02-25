#include<bits/stdc++.h>
using namespace std;

main()
{
    int arr[10],l;
    string str;
    int sum=0;

    for(int i=1;i<=4;i++)
        cin>>arr[i];
    cin>>str;
    l=str.length();
    for(int i=0;i<l;i++)
        sum+=arr[str[i]-48];

    cout<<sum;
}
