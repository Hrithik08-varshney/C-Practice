#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int val=0;
    for(int j=1;j<=(n*2)-1;j++){
      if(j>=n+1-i && j<=n+i-1){
        cout<<" "<<pow(2,val)<<" ";
            if(j>=n)
              val--;
            else
              val++;
      /*  if(j>=n+1-i){
          val++;
        }
        /*else{
          val--;
        }*/
      }
      else{
        cout<<"   ";
      }
    }
    cout<<endl;
  }
}