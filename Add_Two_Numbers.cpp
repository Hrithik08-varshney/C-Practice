#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long int T,A,B,sum;
  cin>>T;
  for (int i=0;i<T;i++){
  	cin>>A>>B;
  	sum=A+B;
  	cout<<sum<<endl;
  }
  return 0;
}