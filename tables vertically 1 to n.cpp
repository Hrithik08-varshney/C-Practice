#include<bits/stdc++.h>
using namespace std;
void table(int n){
	for (int i=1;i<=10;i++){
		for (int j=1;j<=n;j++){
			cout<<j<<"x"<<i<<"="<<j*i<<" ";
		}
		cout<<endl;
	}
	return;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  table(n);
  return 0;
}