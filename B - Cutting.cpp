#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[101];
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    int check=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]%2==0)
            check++;
        else
            check--;
        if(check==0)
        {
            int temp=abs(a[i+1]-a[i]);
            vec.push_back(temp);

        }

    }
    sort(vec.begin(),vec.end());
    int sum=0,cnt=0;
    for(int i=0; i<vec.size(); i++)
    {
        sum=sum+vec[i];
        if(sum>m)
        {
         break;
        }
         else
            cnt++;
    }
       cout<<cnt<<endl;
            return 0;

}
