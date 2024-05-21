/*Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.
You must implement a solution with a linear runtime complexity and use 
only constant extra space.*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int hashneg[N];
int hashpos[N];
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int nums[n+1];
  int flag=0;
  for(int i=0;i<n;i++){
   cin>>nums[i];
   if(nums[i]<0)
    flag=1;
  }
  if(flag==1){

  int minVal=INT_MAX;
  for(int i=0;i<n;i++){
    if(minVal>nums[i])
      minVal=nums[i];
  }
  for(int i=0;i<n;i++){
    if(nums[i]<0)
    {
      hashneg[nums[i]+abs(minVal)]++;
    }
    else
      hashpos[nums[i]]++;
  }
  int next=0;
  if(flag==1){
  for(int i=0;i<N;i++){
   if(hashneg[i]==1){
    cout<<i-abs(minVal);
    next=1;
    break;
   }
  }
}
if(next==0){
for(int i=0;i<N;i++){
   if(hashpos[i]==1){
    cout<<i;
    break;
   }
  }
}

}
else{
   for(int i=0;i<n;i++){
      hashpos[nums[i]]++;
  }
  for(int i=0;i<N;i++){
   if(hashpos[i]==1){
    cout<<i;
    break;
   }
  }
}
  
return 0;
}