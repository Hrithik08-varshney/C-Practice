#include<bits/stdc++.h>
using namespace std;
int lastprime(int n){
	int val=2;
for(int i=2;i<n;i++){
int flag=0;
for(int j=2;j<i;j++){
	if(i%j==0){
		flag=1;
		break;
	}
  }
   if(flag==0){
   	val=i;
   }
 }
return val;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  if(n<=2)
  	cout<<"Value is very small";
  else
  cout<<lastprime(n);
  return 0;
}