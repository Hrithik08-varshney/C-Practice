/*Given array a of N integer. Given Q queries
and in each query given L and R. Print sum of
array elements from index L to R. 
Constraints
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/

//without constraints

/*#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int a[n];
for(int i=1;i<=n;i++){
cin>>a[i];
}
int q;
cin>>q;
while(q--){
	int l,r;
	cin>>l>>r;
	int sum=0;
	for(int i=l;i<=r;i++){
    sum+=a[i];
	}
	cout<<sum<<endl;
}
return 0;
}*/

	/* Time complexity for this program is 
	O(Q*N)= O(N^2) which will give a tle error
	so we will create a prefix sum array storing
	sum from 0 to present index.*/

//with constraints

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N]={0};   //prefix sum array
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++){
  	cin>>a[i];
  	arr[i]=a[i]+arr[i-1];
  }
  int q;
  cin>>q;
  while(q--){
  	int l,r;
  	cin>>l>>r;
  	cout<<arr[r]-arr[l-1]<<endl;
  }
  return 0;
}
