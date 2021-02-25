#include<stdio.h>
#include<string.h>
int main()
{
    int n,n1,count=0,x;
    char s[51];
    scanf("%d ",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%c",&n1);
        s[i]=n1;
    }
    for(int j=0;j<n;j++)
    {
        x=j+1;
        for(int k=x;k<=x;k++)
        {

            if(s[j]==s[k])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;


}

