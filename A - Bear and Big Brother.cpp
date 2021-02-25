#include<stdio.h>
int main()
{
    int little,big,i;
    scanf("%d %d", &little, &big);
    for( i=1;i<big;i++)
    {
        little=little*3;
        big=big*2;
        if(little>big)
        {
            break;
        }
    }
    printf("%d\n",i);
}

