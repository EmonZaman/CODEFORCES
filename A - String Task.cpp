#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1000],s1[1000];
    int i,j,k,l,m,n;
    gets(s);
    l=strlen(s);

    for(i=0;i<l;i++)
    {
        s1[i]=tolower(s[i]);

    }
    for(i=0;i<l;i++)
    {
        if(s1[i]!='a' && s1[i]!='e' &&s1[i]!='i' &&s1[i]!='o' &&s1[i]!='u' && s1[i]!='y')
        {
            printf(".%c",s1[i]);
        }
    }

    return 0;
}

