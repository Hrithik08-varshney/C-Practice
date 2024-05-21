#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long int n,k,r,count=0;
  cin>>n>>k;
  for (int i=0;i<n;i++){
  	cin>>r;
  	if(r>0 && r%k==0){
  		count++;
  	}
  }
  cout<<count;
  return 0;
}