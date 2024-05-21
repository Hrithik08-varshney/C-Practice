#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,score1,score2,sum1=0,sum2=0,subt,large=0,indx;
  cin>>t;
  int arr[t];
  for(int i=1;i<=t;i++){
     cin>>score1>>score2;
     sum1=sum1+score1;
     sum2=sum2+score2;
     subt=abs(sum1-sum2);
     if(large<subt){
         large=subt;
         indx=(score1>score2)?1:2;
     }
  }
  cout<<indx<<" "<<large;
  return 0;
}