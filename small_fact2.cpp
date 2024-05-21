#include<bits/stdc++.h> 
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,n;
  long long fact;
  cin>>t;
  for(int i=0;i<t;i++){
    fact=1;
    cin>>n;
    while(n>1){
       fact=fact*n;
       n--;
    }
    cout<<fact<<endl;
  }
  return 0;
}