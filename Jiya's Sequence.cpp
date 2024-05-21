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
    int n;  
    cin>>n;
    int a,multi=1; 
    for(int i=1;i<=n;i++){
        cin>>a;
       multi*=a;
    }
    if(multi%10==2 || multi%10==3 || multi%10==5)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
  }
  return 0;
}