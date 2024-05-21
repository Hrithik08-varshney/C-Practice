#include<bits/stdc++.h>
using namespace std;
int search(int* arr,int n,int del){
	int flag=0,index;
	for(int i=0;i<n;i++){
		if(arr[i]==del){
			index=i;
			flag=1;
		    break;
		}
	}
	if(flag==1)
		return index;
	else return 0;
}
bool deletion(int* arr,int n,int del){
	int index=search(arr,n,del);
	if(index){
		for(int i=index;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		return true;
	}
	else
		return false;
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
  int del;
  cin>>del;
  if(deletion(arr,n,del)){
  	for(int i=0;i<n-1;i++){
  		cout<<arr[i]<<" ";
  	}
  	delete arr;
  }
  else
  	cout<<"Number not found !!!";
  return 0;
}