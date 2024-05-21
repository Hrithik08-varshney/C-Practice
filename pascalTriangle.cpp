#include<bits/stdc++.h>
using namespace std;
void pascal(int n){
	int a[n][n];
	a[0][0]=1;
	for(int i=1;i<n;i++){
		a[i][0]=1;
		a[i][i]=1;
		for(int j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
            cout<<a[i][j];
		}
		cout<<"\n";
	}
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  pascal(n);
  return 0;
  }