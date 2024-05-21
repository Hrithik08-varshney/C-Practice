#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n+1];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int j=n-1,sum=0;
  for(int i=0;j>=n/2;++i,--j){
    sum+=(arr[j]-arr[i]);
  }
  cout<<sum;
  return 0;
}