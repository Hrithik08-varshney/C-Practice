#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	      freopen("input.txt","r",stdin);
	      freopen("output.txt","w",stdout);
	#endif
	      int r,c ;
	      cin>>r>>c;
	      for (int i=0;i<r;i++)
	      {
	      	 for (int j=0;j<c;j++)
	      	 {
	      	 	if (i%2==0)
	      	 	{
	      	 		cout<<"# ";
	      	 	}
	      	 	else 
	      	 	{
	      	 		cout<<" #";
	      	 	}
             }
             cout<<"\n";
	      }
	      return 0;
}	      
