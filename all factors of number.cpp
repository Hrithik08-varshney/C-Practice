#include<bits/stdc++.h>
using namespace std;
void factors(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0)
			cout<<i<<" ";
	}
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n;
  cin>>n;
  factors(n);
  return 0;
}