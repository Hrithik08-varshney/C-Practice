#include<bits/stdc++.h>
using namespace std;
int productOfNumbers(int n){
	int multi=1;
	while(n>0){
      multi*=n%10;
      n=n/10;
	}
	return multi;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n;
  cin>>n;
  cout<<productOfNumbers(n);
  return 0;
}