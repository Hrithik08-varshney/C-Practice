/*Given 2d array a of N*N integers . Given Q 
queries and in each query given a,b,c and d.
Print sum of square represented by (a,b) as
top left point and (c,d) as top bottom right
point .
Constraints
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/

//without constraints

/*#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N]={0};   //prefix sum array
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int a[n+1][n+1];
  for(int i=1;i<=n;i++)
  	for(int j=1;j<=n;j++)
  		cin>>a[i][j];
  int q;
  cin>>q;
  while(q--){
  	int r1,c1,r2,c2;
  	cin>>r1>>c1>>r2>>c2;
  	int sum=0;
  	for(int i=r1;i<=r2;i++){
  		for(int j=c1;j<=c2;j++){
  			sum+=a[i][j];
  		}
  	}
  	cout<<sum<<endl;
  }
  return 0;
}*/

//with constraints and time complexity 

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
long long pf[N][N];   //prefix sum array
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
  	for(int j=1;j<=n;++j){
  		cin>>a[i][j];
  		pf[i][j]=a[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
  	}
  }
  int q;
  cin>>q;
  while(q--){
  int a,b,c,d;
  		cin>>a>>b>>c>>d;
  		cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
  	}
  	return 0;
  }