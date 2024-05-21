#include<bits/stdc++.h>
using namespace std;
void perfectNumber(int n){
	int i=1;
	for(;i<=n;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0)
               sum+=j;
		}
		if(sum==i)
		cout<<i<<endl;
	}
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  perfectNumber(n);
  return 0;
}