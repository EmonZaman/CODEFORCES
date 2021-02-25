#include<bits/stdc++.h>

using namespace std;
int main()
{

   long long  n , k;
   long long  red=2 , green=5 , blue=8;
   cin >> n >> k;
   if(red*n<=k)
   {
       red=1;
   }
   else
   {
       if((red*n)%k)
       {
           red=(red*n)/k;
           red++;
       }
       else
        red=(red*n)/k;
   }
   if(green*n<=k)
   {
       green=1;
   }
   else
   {
       if((green*n)%k)
       {
           green=(green*n)/k;
           green++;
       }
       else
        green=(green*n)/k;
   }
   if(blue*n<=k)
   {
       blue=1;
   }
   else
   {
       if((blue*n)%k)
       {
           blue=(blue*n)/k;
           blue++;
       }
       else
        blue=(blue*n)/k;
   }
   cout << red + green + blue << endl;
    return 0;
}
