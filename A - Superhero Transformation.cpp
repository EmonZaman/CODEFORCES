#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10001],s[10001];

    int n;
   // cin>>n;
    cin>>a;
    cin>>s;
    int l=strlen(a);
    int l1=strlen(s);
    if(l!=l1)
    {printf("No\n");
    return 0;}
    int cnt=0;
  for(int i=0;i<l;i++)
    {
        cnt=0;
        if(a[i]=='a' || a[i]=='e'||a[i]=='i' ||a[i]=='o'||a[i]=='u')
        {
            cnt++;
        }
        if(s[i]=='a' || s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u')
        {
            cnt++;
        }
     if (cnt==1)
     {
          printf("No\n");
          return 0;

     }



    }
    printf("Yes\n");
    return 0;

}

