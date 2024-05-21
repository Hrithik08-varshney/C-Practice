#include<bits/stdc++.h>
using namespace std;
int secondlargest(int n){
	int arr[n+1];
	int large=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(large<arr[i])
			large=arr[i];
	}
	int secondlarge=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]==large)
			continue;
		if(secondlarge<arr[i])
			secondlarge=arr[i];
	}
	return secondlarge;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  cout<<secondlargest(n);
  return 0;
}