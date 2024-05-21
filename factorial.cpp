#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	      freopen("input.txt","r",stdin);
	      freopen("output.txt","w",stdout);
	#endif
	int num,multi=1;
	cin>>num;
	for (int i=num;i>0;i--)
	{
		multi=multi*i;

	}      
	cout<<multi;
	return 0;
}