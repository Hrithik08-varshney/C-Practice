//Program to find largest element in an array 
//using Dynamic Memory Allocation

#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int* arr=new int[n];
  int ans=INT_MIN;
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  	ans=max(ans,arr[i]);
  }
  cout<<ans;
  return 0;
}