#include<bits/stdc++.h>
using namespace std;

int main(){
 #ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  //vector pair------------------------------------------

  /*int n;
  cin>>n;
  vector<pair<int,int>>v;
for(int i=0;i<n;++i){
   int x,y;
   cin>>x>>y;
   v.push_back({x,y});
}
for(int i=0;i<v.size();++i){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}*/

  //vector of array---------------------------------------------

  /*int N;
  cin>>N;
  std::vector<int> v[N];
  for(int i=0;i<N;++i){
    int n;
    cin>>n;
    for(int j=0;j<n;++j){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
  }
  for(int i=0;i<N;++i){
    for(int j=0;j<v[i].size();++j){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }*/

  //vector of vector------------------------------------------

int N;
cin>>N;
  vector<vector<int>>v;
for(int i=0;i<N;++i){
    int n;
    cin>>n;
    vector<int>temp;
    for(int j=0;j<n;++j){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
for(int i=0;i<v.size();++i){
 for(int j=0;j<v[i].size();++j){
 cout<<v[i][j]<<" ";   
}
cout<<endl;
}
return 0;
}