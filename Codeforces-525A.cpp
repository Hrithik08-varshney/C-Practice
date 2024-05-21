//Vitaliy and Pie

#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  string s;
  cin>>s;
  int ans=0;
  int arr[123]={0};
  for(int i=0;i<s.size();i++){
  	if(s[i]>=97 && s[i]<=122)
  		arr[s[i]]++;
  	else
  		if(s[i]>=65 && s[i]<=90 && arr[tolower(s[i])]>0)
  			arr[tolower(s[i])]--;
    else
    	ans++;
  }
  cout<<ans;
  return 0;
}