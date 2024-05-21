#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
    int t,n,arr[] ={1,2,5,10,50,100},count;
    cin>>t;
    for(int i=0;i<t;i++){
        count=0;
        cin>>n;
        for(int j=5;j>=0;j--){
            while(n>=arr[j] && n>=0){
                n=n-arr[j];
                count++;
            }
        }
        cout<<count<<endl;
    }
    // your code goes here
    return 0;
}