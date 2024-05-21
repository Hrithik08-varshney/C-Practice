#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,k,count=0;
	cin>>n>>k;
	int a[n+4];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int j=0;j<n;j++)
	{
		if (a[j]>=a[j+1] && a[j]>0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
