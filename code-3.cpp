#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,j,i,count=0,s=0,a[50];
	cin>>n;
	for (i=2;i<=n;i++)
	{
		count=0;
		for (j=2;j<=i;j++)
		{
           if (i%j==0)
           	count++;
		}
		if (count<=1)
		{   
			s++;
		}

	}
	cout<<s<<"\n";

return 0;
}