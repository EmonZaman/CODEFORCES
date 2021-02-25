#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[101];
    cin>>a;
    int l=strlen(a);
    int cnt=0,c=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='0')
        {
              c=0;
             cnt++;
             if(cnt==7)
             {
                 printf("YES\n");
                 return 0;
             }
        }


        if(a[i]=='1')
        {
             cnt=0;
           c++;
           if(c==7)
             {
                 printf("YES\n");
                 return 0;
             }
        }
             // cnt=0;


    }
   printf("NO\n");

}

