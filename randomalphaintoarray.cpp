#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	randomize();
	#ifndef ONLINE_JUDGE
	      freopen("input.txt","r",stdin);
	      freopen("output.txt","w",stdout);
	#endif
	      int num=26,i=0,temp;
	      char ran[20];
	      char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	      while (i<20)
	      {
	      	 temp=random(num);
	      	ran[i]=alphabets[temp];
	      	i++;
	      	cout<<ran[i];
	      }
	      return 0;

}
