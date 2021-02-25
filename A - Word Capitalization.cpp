#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    cin>>a;

    if(a[0]>='a' && a[0]<='z')
        a[0]=a[0]-32;
   puts(a);
}

