#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n+1];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max=0;
  for(int i=0;i<n;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  cout<<max<<endl;
  for(int i=0;i<n;i++){
     if(arr[i]<max)
      max=arr[i];
  }
  cout<<max<<endl;
  return 0;
  }