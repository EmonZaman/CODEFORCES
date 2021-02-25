#include<stdio.h>
int main()
{
    int p[101],digit,n,c=0,total;
    char s[101];
    scanf("%d ",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
        p[i]=s[i]-'0';

        if(p[i]==8)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("0\n");
        return 0;
    }
    else
    {

        total=n/11;
        if(c<=total)
        {
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",total);
        }
    }
    return 0;



}

