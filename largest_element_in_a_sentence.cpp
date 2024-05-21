#include<bits/stdc++.h> 
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,i=0,count=0,large=0,start=0,end=0;
   cin>>n;
   char w[n+1];
   cin.ignore(); //clears memory important with getline
   cin.getline(w,n);
   cin.ignore();
    while(i<n)
    {
    	if(w[i]==' ' || w[i]=='\0')
    	{
    		if(count>large)
    		{
    			end=start;
    			large=count;
    		}
    		start=i+1;
    		count=0;
    	}
    	else
    		count++;

    	if(w[i]=='\0')
    		break;
    	i++;
    }
    cout<<large<<endl;
    for (i=0;i<large;i++)
    {
      cout<<w[end+i];
    }
  return 0;
}