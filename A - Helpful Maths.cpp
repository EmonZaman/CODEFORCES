#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    char s[51];
    cin>>a;
   int  l=strlen(a);
    int p=0;
    for(int i=0;i<l;i=i+2)
    {
        s[p]=a[i];
        p++;

    }
    sort(s,s+p);

    for(int i=0;i<p;i++)
    {
        if(i==p-1)
        {
            cout<<s[i]<<endl;
            return 0;
        }
       else
        cout<<s[i]<<"+";
    }
    return 0;
}

