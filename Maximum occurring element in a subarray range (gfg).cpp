#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int arr[n+4];
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  pair<int,int>p_arr[m];
  for(int i=0;i<m;++i){
    int x,y;
    cin>>x>>y;
    p_arr[i]=make_pair(x,y);
  }
  /*for(int i=0;i<m;++i){
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
  }*/
  
  for(int i=0;i<m;++i){
    map<int,int>um;
    for(int j=p_arr[i].first;j<=p_arr[i].second;++j){
        um[arr[j]]++;
    }
    map<int,int>::iterator it;
    int max=0,val;
    for(it=um.begin();it!=um.end();++it){
     /*cout<<(*it).first<<" "<<(*it).second<<endl;*/
      if((*it).second>=max){
        max=(*it).second;
        val=(*it).first;
     }
    }
    cout<<val<<" occurs "<<max<<" times"<<endl;
  }
  return 0;
}