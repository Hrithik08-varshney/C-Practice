#include<bits/stdc++.h>
using namespace std;
bool sortarray(int n,int arr[]){
	if(n==1){
		return true;
	}
	bool array=sortarray(n-1,arr+1);
	return (arr[0]<arr[1] && array);
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n+1];
  for (int i=0;i<n;i++){
  	cin>>arr[i];
  }
  cout<<sortarray(n,arr);
  return 0;
}