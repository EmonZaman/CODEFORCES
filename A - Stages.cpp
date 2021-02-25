#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int n,k,total=0,temp=-2,check=1,check1;
    scanf("%d%d ",&n,&k);
    check1=k;

    scanf("%s",s);

    sort(s,s+n);
    for(int i=0; i<n; i++)
    {
        if(s[i]-'a'+1 -temp >check )
        {
            if(k==0)
            {
                break;
            }
            total=total+s[i]-'a'+1;
            temp=s[i]-'a'+1;
            k--;
        }
    }


    if(k==0)
        printf("%d ",total);
    else
        printf("-1\n");
    return 0;


}

