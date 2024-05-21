//Given N strings , print unique strings in lexiographical
//order with their frequency
/*N<=10^5
|S|<=100*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int N;
  cin>>N;
  map<string,int>m;
  for(int i=1;i<=N;++i){
  	string s;
  	cin>>s;
  	m[s]++;
  	  }
  	  for(auto pr:m){
  	  	cout<<pr.first<<" "<<pr.second<<endl;
  	  }
  return 0;
}