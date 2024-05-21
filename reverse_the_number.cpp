#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  /*int t,rev;
  long n;
  cin>>t;
  for (int i=0;i<t;i++){
    cin>>n;
    while(n>0){
      rev=n%10;
      cout<<rev;
      n=n/10;
    }
    cout<<endl;
  }
  return 0;
}*/
  int t;
  string s;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<stoi(s)<<endl;
  }
  return 0;
}