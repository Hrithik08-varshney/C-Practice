#include<bits/stdc++.h>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int multi=power(n,p-1);
    return n*multi;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,p;
  cin>>n>>p;
  cout<<power(n,p);
  return 0;
}