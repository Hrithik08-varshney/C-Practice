#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  for (int i=0;i<t;i++){
  int n;
  cin>>n;
  int size=500,nfact[size],carry=0,j=size-1;
  nfact[size-1]=1;
  while(n>1){
    int x;
    for (int k=size-1;k>=j;k--){
      x=nfact[k]*n+carry;
      nfact[k]=x%10;
      carry=x/10;
    }
    while(carry>0){
      nfact[--j]=carry%10;
      carry/=10;
    }
    n--;
  }
  for(int k=j;k<size;k++){
    cout<<nfact[k];
  }
  cout<<endl;
}
  return 0;
}