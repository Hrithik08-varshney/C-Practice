#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,count,comp;
  cin>>t;
  long n;
  for(int i=0;i<t;i++){
        count=0;
        cin>>n;
        while(n>0){
          comp=n%10;
          if(comp==4)
            count++;
          n=n/10;
        }
        cout<<count<<endl;
  }
  return 0;
}