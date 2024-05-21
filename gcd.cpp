#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int small=a>b?a:b;
	int g;
	for(int i=1;i<=small;i++){
     if(a%i==0 && b%i==0)
     	g=i;
	}
	return g;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a,b;
  cin>>a>>b;
  if(a==b)
  	cout<<a;
  else{
  cout<<gcd(a,b);
}
	return 0;
}