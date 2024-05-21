//without time complexity

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    long long int arr[n+m];
    int i=0;
    for(;i<n;i++){
        cin>>arr[i];
    }
    int flag;
    for(;i<n+m;i++){
        cin>>arr[i];
        flag=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
  }
  return 0;
}*/

//with time complexity

#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    unordered_set<long long int>s;
    long long int x;
    int i=0;
    for(;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    for(;i<n+m;i++){
        cin>>x;
        auto it=s.find(x);
        if(it!=s.end()){
            cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        s.insert(x);
    }
}
  return 0;
}