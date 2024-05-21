#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt.txt","w",stdout);
  #endif
	int t, p;
	cin>>t;
	while(t--)
	{
		cin>>p;
		int a{2048}, sum{0};
		while(p>0)
		{
		    sum+= p/a;
		    p= p%a;
		    a= a/2;
		}
		cout<<sum<<endl;
	}
	return 0;
}
