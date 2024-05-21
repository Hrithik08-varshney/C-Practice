#include<bits/stdc++.h>
using namespace std;
float series(int n){
	float sum=0;
	for(float i=1;i<=n;i++){
		if(i<9)
		sum+=((i*10)+(i+1))/10;
	else if(i==9){
		sum+=((i*10)+1)/10;
	}
	else
		sum+=((i*100)+(i+1))/100;
	}
	return sum;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int n;
  cin>>n;
  if(n>=1 && n<=98)
  cout<<series(n);
else
	cout<<"Value is too high";
  return 0;
}