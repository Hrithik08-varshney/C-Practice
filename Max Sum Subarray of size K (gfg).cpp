//Brute Force Approach

/*#include<bits/stdc++.h>
using namespace std;
const int N=10;
int prefarr[N];
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,k;
  cin>>n>>k;
  int arr[n+1]={0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum;
  for(int i=0;i<=n-k;i++){
    sum=0;
    for(int j=i;j<i+k;j++){
      sum+=arr[j];
    }
    prefarr[i]=sum;
  }
  int max_sum = INT_MIN;
  for(int i=0;i<N;i++){
     if(max_sum<prefarr[i])
      max_sum=prefarr[i];
  }
cout<<max_sum;
  return 0;
}*/

//Time complexity

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int prefarr[N];
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,k;
  cin>>n>>k;
  int arr[n+1]={0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum=0,win=0;
  //first ka sum or window a gayi
  for(int i=0;i<k;i++){
    sum+=arr[i];
    if(i>=1)
      win+=arr[i];
  } 
  /*cout<<sum<<" "<<win;*/
  prefarr[0]=sum;
 for(int i=1;i<=n-k;i++){
  sum=0;
  sum+=win+arr[i+k-1];
  prefarr[i]=sum;
  win=sum-arr[i];
 }
 int max_sum = INT_MIN;
  for(int i=0;i<N;i++){
     if(max_sum<prefarr[i])
      max_sum=prefarr[i];
  }
cout<<max_sum;
  return 0;
}