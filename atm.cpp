#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  double y;
  int x;
  cin>>x>>y;
  if (x%5==0 && x<=(y-0.5))
  {
  	cout<<(y-x-0.50);
  }

  else{
   cout<<y;
  }
   return 0;
}