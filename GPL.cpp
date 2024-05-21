//Binary to Decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   int T;
   cin>>T;
   while(T--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=1,sum=0;
for(int i=0,j=s.size()-1;i<n;i++,j--){
  int val=s[j]-'0';
  int m=val*pow(2,i);
  sum+=m;
}
cout<<sum<<"\n";
   }
  return 0;
}