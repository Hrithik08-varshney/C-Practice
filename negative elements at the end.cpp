#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int arr[]={-5,7,-3,-4,9,10,-1,11};
  int n=sizeof(arr)/sizeof(arr[0]);
  int arr2[n];
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
        arr2[j]=arr[i];
        j++;
    }
  }
  for(int i=0;i<n;i++){
     if(arr[i]<=0){
        arr2[j]=arr[i];
        j++;
     }   
    }
  for(int i=0;i<n;++i){
  	arr[i]=arr2[i];
    cout<<arr[i]<<" ";
  }
  return 0;
}