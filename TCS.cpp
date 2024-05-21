#include<bits/stdc++.h>
using namespace std;
bool prime(int val){
  for(int i=2;i<val;i++){
    
  }
}
int main(){
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int a;
  cin>>a;
  int b=a+1;
  while(1){
    int val=b;
    bool ans=prime(val);
    int multi=1;
      while(val>0){
        int m=val%10;
        multi*=m;
        val/=10;
      }
      if(multi==a)
        cout<<
  }
}
