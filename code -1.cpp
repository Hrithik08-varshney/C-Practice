#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
int t,size,i,count;
cin>>t;
while (t>0)
{
     cin>>size;
     count=size;
     int a[size];
     for (i=0;i<size;i++)
     {
     	cin>>a[i];
     }
     for (i=0;i<size-1;i++)
     {
     	if(a[i]!=a[i+1])
     	{
     		count--;
     	}
     	
     }
     if(count==size)
     	cout<<size<<endl;
     else 
     	cout<<1<<endl;
     t--;
     
}
return 0;
}