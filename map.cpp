#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  map<int,string>m;
  int n;
  cin>>n;
  while(n--){
  	int val;
  	string str;
  	cin>>str>>val;
  	m.insert({val,str});
  	map<int,string>::iterator itr;
  	for(itr=m.begin();itr!=m.end();++itr){
  		cout<<itr->first<<" "<<itr->second<<endl;
  	}
  }
  return 0;
}