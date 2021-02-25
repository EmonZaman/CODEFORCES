


#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],s1[101],l;
    gets(s);
    gets(s1);
    l=strlen(s1);
    for(int i=0;i<l;i++)
    {
        if(s[i]==s1[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }


    }
    printf("\n");
    return 0;

}

