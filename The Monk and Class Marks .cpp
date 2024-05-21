#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  map<int,multiset<string>,greater<int>>m;
  int n;
  cin>>n;
  while(n--){
    int marks;
    string name;
    cin>>name>>marks;
    m[marks].insert(name);
  }
  for(auto &pr:m){
    for(auto &s:pr.second){
      cout<<s<<" "<<pr.first<<endl;
    }
  }
  return 0;
}