//without constraints

/*#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,m;
  cin>>n>>m;
  int a[n+1],b[m+1];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  int flag=0;
  for(int i=0;i<n;i++){
    flag=0;
    for(int j=0;j<m;j++){
      if(a[i]==b[j]){
        flag=1;
        break;
      }
    }
    if(!flag)
      cout<<a[i]<<" ";
  }
  return 0;
}*/

//with constraints and time complexity

#include<bits/stdc++.h>
using namespace std;
const long s=1e6+10;
long hasharr[s];
const long N=1e6+10;
const long M=1e6+10;
long A[N],B[M];
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long n,m;
  cin>>n>>m;
  for(long i=0;i<n;i++){
    cin>>A[i];
    if(hasharr[A[i]]==0)
    hasharr[A[i]]++;
  }
  for(long i=0;i<m;i++){
    cin>>B[i];
    hasharr[B[i]]+=2;
  }
  for(long i=0;i<n;i++){
    if(hasharr[A[i]]==1){
      cout<<A[i]<<" ";
    }
  }
  return 0;
}