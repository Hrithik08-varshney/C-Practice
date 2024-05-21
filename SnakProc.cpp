#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int r;
  cin>>r;
  while(r--){
    int l;
    int count=0;
    cin>>l;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
     if(s[i]=='H'){
      if(count==0)
      count++;
    else{
      count=1;
      break;
    }
     }
      
    else if(s[i]=='T'){
      if(count==1)
      count--;
    else{
      count=1;
      break;
      }
     }
    }
    if(!count)
      cout<<"Valid"<<endl;
    else
      cout<<"Invalid"<<endl;
  }
  return 0;
}