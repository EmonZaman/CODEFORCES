#include<bits/stdc++.h>
using namespace std;


int main() {
    int n ;
    cin>>n;
    long long int arr[n+1], c[n+1];
    for( int i = 0 ; i<n ; i++)
        cin>>arr[i];
        int cupons;
        cin>>cupons;
    for( int i = 0 ; i<cupons ; i++)
        cin>>c[i];
    sort( arr, arr+n , greater<int>());
//
//   for( int i = 0 ; i<n ; i++)
//      cout<<arr[i]<<" ";
//     cout<<endl;

long long result[n+1];

result[0]= arr[0];

    for( int i = 1 ; i<n ; i++)
    result[i]= result[i-1]+arr[i];

//        for( int i = 0 ; i<n ; i++)
//     cout<<result[i]<<" ";
//     cout<<endl;


for( int i=0 ; i<cupons ; i++ )

{
  //  cout<<result[c[i]-2] <<" "<< result[n-1]<<" "<<result[c[i]-1]<<endl;;
    cout<<result[c[i]-2] + result[n-1]-result[c[i]-1]<<endl;;



}

  return 0;
}

