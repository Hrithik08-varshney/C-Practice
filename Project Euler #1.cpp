#include<bits/stdc++.h> 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long t,n,sum;
  cin>>t;
  for (int i=0;i<t;i++){
  	cin>>n;
  	sum=0;
  	for(int j=1;j<n;j++){
  		if(j%3==0 || j%5==0){
  			sum=sum+j;
  		}
  	}
  	cout<<sum<<"\n";
  }
  return 0;
}