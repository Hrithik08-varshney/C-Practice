#include<bits/stdc++.h> 
using namespace std;
int add(vector<int> &A,int n){
    A.push_back(n);
    return 0;
}
int sort_vect(vector<int> &A){
    sort(A.begin(),A.end());
    return 0;
}
int reverse(vector<int> &A){
    reverse(A.begin(),A.end());
    return 0;
}
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  long T,Q;
  char val;
  int num;
  cin>>T;
  for (int i=0;i<T;i++){
    cin>>Q;
    vector <int> v;
    for(int i=0;i<Q;i++){
        cin>>val;
        if(val=='a'){\
            cin>>num;
            add(v,num);
        }
        else if(val=='b'){
            sort_vect(v);
        }
        else if(val=='c'){
            reverse(v);
        }
        else if(val=='d'){
            cout<<v.size()<<" ";
        }
        else if(val=='e'){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
    }

  }
  return 0;
}