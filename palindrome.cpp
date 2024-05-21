#include<bits/stdc++.h>
using namespace std;
string palindrome(string n){
	string first=n;
	reverse(n.begin(),n.end());
    string rev=n;
	int flag=0;
    for(int i=0;i<n.length();i++){
       if(first[i]!=rev[i]){
       	flag=1;
       	break;
       }
    }
    if(flag==1)
    	return "not palindrome";
    else
    	return "palindrome";
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string n;
  cin>>n;
  cout<<palindrome(n);
  return 0;
}