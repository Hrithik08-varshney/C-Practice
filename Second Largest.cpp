#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t,a,b,c;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(b>c)
            cout<<b;
        else
            cout<<c;
    }
    if(b>=a && b>=c){
        if(a>c)
            cout<<a;
        else
            cout<<c;
    }
if(c>=a && c>=b){
        if(a>b)
            cout<<a;
        else
            cout<<b;
    }
cout<<endl;
  }
  return 0;
}