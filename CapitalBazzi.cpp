#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string str;
  getline(cin,str);
  int l=str.size();
  for(int i=0;i<l;i++){
  	if(str[i]==' ')
  		cout<<"\n";
    
 else{
 	char ch=toupper(str[i]);
 	 cout<<ch;
 	}
  }
}