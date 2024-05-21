#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,sol=1;
  cin>>n;
  int arr[n],ans[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  	sol*=arr[i];
  }
  /*for(int i=0;i<n;i++){
  	int multi=1;
  	for(int j=0;j<n;j++){
  		if(i==j)
  			continue;
  		else {
  			multi*=arr[j];
  		}
  	}
  	ans[i]=multi;
  }
  for(int i=0;i<n;i++){
  	cout<<ans[i]<<" ";
  }*/

  for(int i=0;i<n;i++){
  	ans[i]=sol/arr[i];
  	cout<<ans[i]<<" ";
  }
  return 0;
}