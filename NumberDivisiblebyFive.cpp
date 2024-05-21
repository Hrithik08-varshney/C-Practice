#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int N;
  cin>>N;
  for ( int i= 5;i<=N;i++){
  	if (i%5 != 0){
  		continue;
  	}
  	cout<<i<<endl;
  }
  return 0;
}