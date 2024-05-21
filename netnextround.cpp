#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n[100],k,nn,i,j,c=0;
 while(cin>>nn>>k)
 {
  for(i=0;i<nn;i++)
  {
      cin>>n[i];
  }
  for(i=0;i<nn;i++)
  {
      if(n[i]>=n[k-1]&&n[i]>0)
        c++;
  }
  cout<<c<<endl;
  c=0;
}
  return 0;
}