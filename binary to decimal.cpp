#include<bits/stdc++.h>
using namespace std;

void binarytodecimal(int n){
	string str="";
  while(n>0){
  	if(n==1 || n==0){
       str+=to_string(n);
       break;
  	}
   int rem=n%2;
  string s=to_string(rem);
  str+=s;
  n=n/2;     
  }
  reverse(str.begin(), str.end());
  cout<<str;
}

int main(){
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  binarytodecimal(n);
  return 0;
}
    