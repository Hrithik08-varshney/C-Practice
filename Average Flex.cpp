#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	int count=0;
     int arr[n];
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     }
     for(int i=0;i<n;i++){
     	int low=0;
     	int high=0;
     	for(int j=0;j<n;j++){
     		if(i==j){
     			continue;
     		}
     		else{
               if(arr[i]>=arr[j])
               	low++;
               else
               	high++;
     		}
     	}
     	if(low>=high)
     		count++;
     }
     cout<<count<<endl;
  }
  return 0;
}