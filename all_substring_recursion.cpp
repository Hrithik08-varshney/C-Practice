#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string ros=s.substr(1);
	subseq(ros,ans);
	subseq(ros,ans+ch);
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s;
  cin>>s;
  subseq(s,"");
  return 0;
}