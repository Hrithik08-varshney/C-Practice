#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,n,sum1=0,sum2=0;
  cin>>t;
  for (int i=0;i<t;i++){
    int sum=0;
    cin>>n;
  int length = to_string(n).length();
   sum1=n%10;
   for(int j=0;j<length;j++){
    sum2=n%10;
    n=n/10;
   }
    sum=sum1+sum2;
   cout<<sum<<endl;
 }
 return 0;
}