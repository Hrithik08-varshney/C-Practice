#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
          cin>>arr[i];
	}         
	int item;                    
	 cin>>item;    
	 int beg=0,last=n-1,mid,pos;
	 while(beg <= last)
	 {
	 	mid=beg+(last-beg)/2;
	 	if (item==arr[mid])
	 	{
	 		pos=mid;
	 		cout<< " ELEMENT FOUND AT ="<< pos+1;
	 		break;
	 	}
	 	else
	 		if(item>arr[mid])
	 		{
	 			beg=mid+1;
	 		}
	 		else
	 			last=mid-1;
	 }
	 return 0;
	}
