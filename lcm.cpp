#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==b)
		return a;
	else{
	int small=a>b?a:b;
	int g;
	for(int i=1;i<=small;i++){
     if(a%i==0 && b%i==0)
     	g=i;
	}
	return g;
  }
}
int lcm(int a,int b){
	 return ((a*b)/gcd(a,b));
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a,b;
  cin>>a>>b;
  cout<<lcm(a,b);
	return 0;
}