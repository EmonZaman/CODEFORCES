#include<stdio.h>
int main()
{
    char a[100];
    int i,m,cnt=0;
    m=strlen(gets(a));
    for(i=0;i<m;i++)
    {

            if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            cnt=cnt+1;

        }
    }
    printf("%d\n",cnt);

    return 0;
}
