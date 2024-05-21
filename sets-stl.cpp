#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt.txt","w",stdout);
  #endif
    long x;
    int t,q,flag=0;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++){
        flag=0;
        cin>>q>>x;
        if(q==1){
        v.push_back(x);
        }
        else if(q==2){
            for(int j=0;j<v.size();j++){
                if(x==v[j]){
                    v.erase(v.begin()+j,v.begin()+(j+1));
                }
            }
        }
        else if(q==3){
            for(int j=0;j<v.size();j++){
                if(x==v[j]){
                    flag=1;
                    break;
                }
            }
            if(!flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}