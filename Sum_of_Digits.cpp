#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long int T,sum=0,N;
  cin>>T;
  for (int i=0;i<T;i++){
         cin>>N;
         sum=0;
         while(N>0){
         	sum=sum+(N%10);
         	N=N/10;
         }
         cout<<sum<<endl;
  }
  return 0;
}