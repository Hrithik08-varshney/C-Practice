#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	int multi=1;
	for(int i=n;i>1;i--){
       multi*=i;
	}
	return multi;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,r;
  cin>>n>>r;
  cout<<fact(n)/fact(n-r);
  /*cout<<fact(n)/(fact(n-r)*fact(r));*/   //combination
  return 0;
}