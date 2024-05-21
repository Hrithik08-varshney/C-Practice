#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  /*string n;
  cin>>n;
  int sum;
  sum=n[0]-'0'+n[n.size()-1]-'0';
  cout<<sum;*/
  /*int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==j || j==1)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }*/
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      if(i>=3 && i%2==0 && j>=2 && j<i){
        cout<<" 0 ";
      }
      else{
      cout<<" 1 ";
       }
    }
    cout<<"\n";
  }
  return 0;
}