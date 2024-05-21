#include<bits/stdc++.h>
using namespace std;
void compliment(string n)
{
      for(int i=0;i<n.length();i++){
      	if(n[i]=='1')
      		n[i]='0';
      	else
      		n[i]='1';
      	cout<<n[i]<<" ";
      }
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  string n;
  cin>>n;
  compliment(n);
  return 0;
}