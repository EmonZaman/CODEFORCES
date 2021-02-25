#include<stdio.h>
int main()
{
    char str[100001];
    long int n , i , a=0 ,d=0 ;
    scanf("%ld ",&n);
    gets(str);

    for(i=0 ; i<n ; i++)
    {
        if(str[i]=='D')
            d++;
        else if (str[i]=='A')
            a++;
    }
     if(a>d)
        printf("Anton\n");
      else if(a<d)
        printf("Danik\n");
     else if (a==d)
        printf("Friendship\n");

    return 0 ;
}
