#include<bits/stdc++.h>
using namespace std;
void duplicates(int arr[],int n){
	sort(arr,arr+n);
	/*for(int i=0;i<n;i++){
  	cout<<arr[i]<<" ";
  }*/
	int count=0;
	for(int i=0;i<n-1;i++){
		int val=arr[i];
		if(arr[i+1]==val)
			count++;
		else
			continue;
		for(int j=i+1;j<n;j++){ 
			if(arr[j]!=arr[j+1]){
				i=j;
				break;
			}
		}
	}
	cout<<count<<endl;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  duplicates(arr,n);
  return 0;
}