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
    int n,k;
    cin>>n>>k;
    long long int arr[n+4];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int sum=0;
    int idx;
    while(k--){
       int max=INT_MIN;
       for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            idx=i;
         }
        }
        sum+=max;
        arr[idx]=floor(arr[idx]/2); 
       }
       cout<<sum<<endl;
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
    int n,k;
    cin>>n>>k;
    multiset<long long int>m;
    long long int x;
    for(int i=0;i<n;i++){
        cin>>x;
        m.insert(x);
    }
    long long int sum=0;
    while(k--){
       auto lastIt=(--m.end());
        sum+=(*lastIt);
        m.erase(lastIt);
        m.insert((*lastIt)/2);
    }
    cout<<sum<<endl;
}
    return 0;
  }