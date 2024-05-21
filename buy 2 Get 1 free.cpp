#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    int cost=0;
    while(n){
      if(n>=3){
        n-=3;
        cost+=(x*2);
      }
      else{
        cost+=(n*x);
        n=0;
      }
    }
    cout<<cost<<endl;
  }
  return 0;
}