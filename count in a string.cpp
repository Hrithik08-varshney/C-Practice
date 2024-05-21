#include<bits/stdc++.h>
using namespace std;
int letters(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			count++;
	}
	return count;
}
int spaces(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ')
			count++;
	}
	return count;
}
int digits(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9')
			count++;
	}
	return count;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s;
  cin>>s;
  cout<<"Characters = "<<s.length()<<endl;
  cout<<"Letters = "<<letters(s)<<endl;
  cout<<"Spaces = "<<spaces(s)<<endl;
  cout<<"Digits = "<<digits(s)<<endl;
  cout<<"Other Characters ="<<s.length()-letters(s)-spaces(s)-digits(s)<<endl;
  return 0;
}