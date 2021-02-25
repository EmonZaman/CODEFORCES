#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		vector<int > vec(n);
		vector<int >cnt(n+1);
		for(auto &it : vec){

               cin>>it;
               ++cnt[it];
		}
		int ans=0;

		for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+vec[j];
                if(i==j)continue;
                if(sum<=n)
                {
                    ans=ans+cnt[sum];
                    cnt[sum]=0;
                }
            }
        }
        cout<<ans<<endl;

	}
}

