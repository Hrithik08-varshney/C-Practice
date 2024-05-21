#include<bits/stdc++.h> 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long n,q,k,num,val;
  int l,m;
  vector<vector<int> > vect;
  cin>>n;
  cin>>q;
  for(int i=0;i<n;i++){
    vector<int>v;
  	cin>>k;
  	for(int j=0;j<k;j++){
  		cin>>val;
  		v.push_back(val);
  	}
    vect.push_back(v);
  }
  for(int i=0;i<q;i++){
    cin>>l>>m;
    cout<<vect[l][m]<<endl;
  }
  
  return 0;
}