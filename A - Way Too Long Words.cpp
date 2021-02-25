#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,j,k,l,t;
    scanf("%d",&t);
    getchar();
    while(t>0)
    {
        gets(s);
        l=strlen(s);
        k=l-2;
        j=l-1;

        if(l<=10)
        {
            for(i=0;i<l;i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%c",s[0]);
            printf("%d",k);
            printf("%c",s[j]);
            printf("\n");
        }
        t--;
    }
    return 0;
}
