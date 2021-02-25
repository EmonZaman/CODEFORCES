#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[101],s1[101],n[101],n1[101];
    int i,j,k,len1,len2,result;
    scanf("%s",s);
    scanf("%s",s1);
    len1=strlen(s);
    len2=strlen(s1);
    for(i=0; i<len1; i++)
    {
        n[i]=tolower(s[i]);
    }
    for(i=0; i<len1; i++)
    {
        n1[i]=tolower(s1[i]);
    }
    n1[len1]=n[len1]='\0';
    result=strcmp(n,n1);
    if(result==0)
    {
        printf("0\n");
    }
    else if(result<0)
    {
        printf("-1\n");
    }
    else
    {
        printf("1\n");
    }


    return 0;
}
