#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,n,ans;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    ans=sqrt(n);
    cout<<ans<<endl;
  }
  return 0;
}
