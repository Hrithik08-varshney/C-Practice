#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n<0)
        return 0;
     return sum(arr,n-1)+arr[n];
}
int main(){
 #ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n+4];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<sum(arr,n-1);
  return 0;
}