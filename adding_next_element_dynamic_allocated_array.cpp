//Program to add every element in an array with next element 
//using Dynamic Memory Allocation
//eg 1 2 3 4 5 
//ou 3 5 7 9 5

#include<bits/stdc++.h>
using namespace std;
bool add(int* arr,int n){
	for(int i=0;i<n-1;i++){
          arr[i]+=arr[i+1];
	}
	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  if(add(arr,n)){
  	for(int i=0;i<n;i++){
  		cout<<arr[i]<<" ";
  	}
  }
  return 0;
}