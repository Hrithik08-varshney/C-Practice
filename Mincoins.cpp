#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
  int x;
  cin>>x;
  int count10=0,count5=0;
  while(x>=5){
     if(x>=10){
      x-=10;
      count10++;
     }
     else if(x>=5){
      x-=5;
      count5++;
     }
   }
   if(x==0)
    cout<<count10+count5<<endl;
  else 
    cout<<stoi("-1")<<endl;
  }
  return 0;
}