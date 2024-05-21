#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long arr[N];
int main(){
 #ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,m;
    cin>>n>>m;
    
    while(m--){
      int a,b,k;
      cin>>a>>b>>k;
      arr[a]+=k;
      arr[b+1]-=k;
    }
    for(int i=1;i<=n;++i){
        arr[i]+=arr[i-1];
    }
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(max<arr[i])
          max=arr[i];
    }
    cout<<max;
return 0;
}