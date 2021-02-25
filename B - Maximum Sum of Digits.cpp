#include<stdio.h>
#include<string.h>
  int ans=0,t,l;

int main()


{
    char s[100];

    gets(s);
    l=strlen(s);

    l--;

    t=l;
    for(int i=l;i>0;i--)
    {
        if(s[i]=='9')
        {
            t--;

        }
        else
        {
            break;
        }
    }
    for(int i=0;i<=l;i++)
    {
        ans=ans+s[i]-'0';


    }
    ans=ans+t*9;

    printf("%d\n",ans);
    return 0;


}

