#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int a[n+4],b[n+4];
  for(int i=0;i<n;++i){
  	cin>>a[i];
  }
  for(int i=0;i<n;++i){
  	cin>>b[i];
  }
  pair<int,int>p[n];
  for(int i=0;i<n;++i){
  	p[i]={a[i],b[i]};
  }
  for(int i=0;i<n;++i){
  	cout<<p[i].first<<" "<<p[i].second<<endl;
  }
  return 0;
}