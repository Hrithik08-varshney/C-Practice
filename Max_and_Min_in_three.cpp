#include<bits/stdc++.h>
using namespace std;
void max_and_min(int a,int b,int c){
 if(a>b && a>c){
  cout<<"Max="<<a<<endl;
  if(b>c)
    cout<<"Min="<<c<<endl;
  else
    cout<<"Min="<<c<<endl;
 }
 if(b>a && b>c){
  cout<<"Max="<<b<<endl;
  if(a>c)
    cout<<"Min="<<c<<endl;
  else
    cout<<"Min="<<a<<endl;
 }
 if(c>a && c>b){
  cout<<"Max="<<c<<endl;
  if(b>a)
    cout<<"Min="<<a<<endl;
  else
    cout<<"Min="<<b<<endl;
 }
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a,b,c;
  cin>>a>>b>>c;
  max_and_min(a,b,c);
  return 0;
}