#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i,j,k,l,t,c;
    scanf("%d",&t);
    getchar();
    c=0;


    for(i=0; i<t; i++)
    {
        gets(s);



        if(strcmp(s,"++X")==0 || strcmp(s,"X++")==0)
        {

            c=c+1;
        }
        else if(strcmp(s,"--X")==0 || strcmp(s,"X--")==0)
        {
            c=c-1;
        }


    }
    printf("%d\n",c);
    return 0;

}
