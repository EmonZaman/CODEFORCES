#include<iostream>
using namespace std;
void solve(){
    int n,k;
	cin>>n>>k;
	cout<<n-k+k/2<<endl;
	for(int i=k-k/2;i<=n;i++)
	if(i!=k)
	cout<<i<<" "<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	solve();
}
}
