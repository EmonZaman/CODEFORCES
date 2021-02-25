
#include<bits/stdc++.h>
using namespace std;
vector<long long int>vec;

void made()
{
    long long  int sum;
    vec.push_back(2);
    vec.push_back(7);

   long long int check=3;

    for(int i=2;i<1000000;i++)
    {
        check=check+(i*3);

        sum=((i+1)*2)+check;;


         // cout<<sum<<" ";;
        vec.push_back(sum);

    }






}




int main()
{
    // int t;cin>>t
    made();
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if (binary_search(vec.begin(), vec.end(), n))
        {
            int low=lower_bound(vec.begin(), vec.end(), n)  - vec.begin();
            cout<<"1"<<endl;
        }
        else
        {
            long long int sum=0;
            while(n>2)
            {
                if (binary_search(vec.begin(), vec.end(), n))
                {
                    sum++;
                    break;
                }
                int low=lower_bound(vec.begin(), vec.end(), n)  - vec.begin();
                //low--;
                //cout<<"low "<<low<<endl;
                // cout<<vec[low]<<endl;

                int temp=n/vec[low-1];
                // cout<<" temp "<<temp<<endl;

                sum=sum+temp;

                n=n%vec[low-1];
                // cout<<n<<endl;
                if(n==2)
                    sum++;
            }


            cout<<sum<<endl;

        }




    }
}


