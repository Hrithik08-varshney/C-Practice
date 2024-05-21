#include<bits/stdc++.h>
using namespace std;
void frequency(int n){
	for(int i=0;i<=9;i++){
		int val=n,count=0;
		while(val>0){
			int mod=val%10;
			if(mod==i)
				count++;
			val=val/10;
		}
		cout<<"Frequency of "<<i<<" is = "<<count<<endl;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n;
  cin>>n;
  frequency(n);
  return 0;
}