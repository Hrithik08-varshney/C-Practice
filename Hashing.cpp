/* Given array a of N integers . Given Q queries
& in each array given a number X, print count of
that number in array

Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N]={0};
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  	arr[a[i]]++;
  }
  int Q;
  cin>>Q;
  while(Q--){
  	int val;
  	cin>>val;
  	cout<<arr[val]<<endl;
  }
  return 0;
}