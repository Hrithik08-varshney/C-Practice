#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	int flag=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
  	if(s[i]>='A' && s[i]<='Z'){
  		s[i]+=32;
  	}
  	else if(s[i]>='a'&&s[i]<='z'){
  		s[i]-=32;
  	}
  }
  /*cout<<s<<"\n";*/
  int up=0,low=0;
  for(int i=0;i<s.size();i++){
  	if(s[i]>='A' && s[i]<='Z'){
  		up+=s[i];
  	}
  	else if(s[i]>='a'&&s[i]<='z'){
  		low+=s[i];
  	}
  }
  /*cout<<up<<" "<<low<<"\n";
  cout<<abs(up-low);*/
  int x=abs(up-low);
  cout<<prime(x);
    return 0;
  }