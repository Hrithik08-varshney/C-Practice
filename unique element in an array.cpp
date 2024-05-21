#include<bits/stdc++.h>
using namespace std;
void unique(int arr[],int arrSize){
     sort(arr, arr + arrSize);
     for(int i=0;i<arrSize;i++){
     	if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
     		cout<<arr[i]<<endl;
     }
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int arr[]={1,2,4,5,2,2,1};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  unique(arr,arrSize);
  return 0;
}