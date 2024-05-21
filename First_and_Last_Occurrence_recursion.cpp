#include<bits/stdc++.h>
using namespace std;
int first(int n,int arr[],int i,int val){
	if(i==n){
		return -1;
	}
          if(arr[i]==val){
          	return i;
          }
   return first(n,arr,i+1,val);
}
int last(int n,int arr[],int i,int val,int index){
	if(i==n){
		return index;
	}
	if(arr[i]==val){
          	 index=i;
          }
         return last(n,arr,i+1,val,index); 
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif 
  int n,i=0,index=0;
  cin>>n;
  int arr[n+1];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  int val;
  cin>>val;
  /*cout<<first(n,arr,i,val)<<endl;*/
  int ans=last(n,arr,i,val,index);
  if(ans)
  	cout<<ans;
  else
  	cout<<"Number not found !!!";
  return 0;
}