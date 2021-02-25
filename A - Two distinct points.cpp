#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  while(n--)
  {
      int a,b,c,d;
      scanf("%d %d %d %d", &a, &b, &c, &d);
      if(a==c)
      {
          printf("%d %d\n",a,c+1);
      }
     else
        printf("%d %d\n",a,c);
  }
  return 0;
}

