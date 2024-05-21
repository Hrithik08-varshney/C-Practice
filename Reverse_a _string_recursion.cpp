#include<bits/stdc++.h>
using namespace std;
 void reverse(string str){
   if(str.length()==0)
    return;
   string r=str.substr(1);
   reverse(r);
   cout<<str[0];
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string str;
  cin>>str;
  reverse(str);
  return 0;
}