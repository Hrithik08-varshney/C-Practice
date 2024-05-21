#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  /*int a=0,b=1;
  cout<<a<<" "<<b;
  int sum=0;
  for(int i=0;i<n-2;i++){
  	sum=a+b;
  	cout<<" "<<sum;
  	a=b;
  	b=sum;
  }*/
  int arr[n];
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<n;i++){
  	arr[i]=arr[i-1]+arr[i-2];
  }
  for(int i=0;i<n;i++){
  	cout<<arr[i]<<" ";
  }
  return 0;
}



