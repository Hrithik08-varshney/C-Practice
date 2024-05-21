#include<bits/stdc++.h>
using namespace std;
void dec(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	dec(n-1);
}
void inc(int n){
	if(n>9){
		cout<<stoi("0");
		return;
	}
	else{
	cout<<n<<" ";
     }
	inc(n+1);
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif 
  int n;
  cin>>n;
  /*dec(n);*/
  inc(n+1);
  return 0;
}