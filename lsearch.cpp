#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	 int size;
	cin>>size;
	int arr[size+4],pos,count=0,i,n;
	for ( i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cin>>n;
	for (i=0;i<size;i++)
	{
		if (n==arr[i])
		{
			count++;
			pos=i;
			cout<<"ELEMENT FOUND AT POSITION ="<< pos+1;
		}
	}

if (count==0)
	cout<<"ELEMENT NOT FOUND";
return 0;
}
