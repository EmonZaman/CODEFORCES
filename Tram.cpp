#include<bits/stdc++.h>
using namespace std;
int i,j,n,a,b,x;
main(){
	cin>>n;
	for(i=0; i<n; i++){
		cin>>a>>b;
		j=j-a+b;
		if(j>x) x=j;
	}
	cout<<x;
}
