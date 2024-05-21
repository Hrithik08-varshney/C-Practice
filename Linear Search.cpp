#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n=5; //size of array
  int arr[n+1];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  int search;
  cin>>search;
  for(int i=0;i<n;i++){
  	if(search==arr[i]){
  		cout<<"Position of element = "<<i+1;
  	}
  }
}