#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int size,count=0,num;
  cin>>size;
  int arr[size+4],b[size+4];
  for (int i=0;i<size;i++)
  {
  	cin>>arr[i];
  }
  for (int i=1;i<=size;i++)
  {
        for (int j=i+1;j<=size;j++)
        {      
            num=arr[i]; 
        	if (num==arr[j])
        	{
        		count++;
                b[count]=i;
        	}
        }
        count=0;
  }
  cout<<b[1];
  return 0;
}
