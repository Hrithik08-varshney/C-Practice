#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int size,num=1,i,p=0;
	cin>>size;
	int arr[size][size];
	int s=size;
	while(num<=size*size)
	{
		for (i=p;i<s;i++)        
		{
			  arr[p][i]=num;
		      num++;
		}
		for (i=p+1;i<s;i++)
		{
			arr[i][s-1]=num;
			num++;
		}
		for (i=s-2;i>=p;i--)
		{
			arr[s-1][i]=num;
			num++;
		}
		for (i=s-2;i>p;i--)
		{
			arr[i][p]=num;
			num++;
		}
		p++,s=s-1;

	}
	for(i=0;i<size;i++)             
	{
		for(int j=0;j<size;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;

}