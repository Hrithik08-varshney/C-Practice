#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  string list[n+10];
  for(int i=0;i<n;++i){
  	cin>>list[i];
  }
  unordered_map<string,int>m;
  for(int i=0;i<n;++i){
     m[list[i]]++;
  }
  unordered_map<string,int>::iterator it;
  int count=0;
for(it=m.begin();it!=m.end();++it){
 if((*it).second==2)
 count++; 
}
cout<<count;
return 0;
}