#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]>='a' && s[i]<='z')
		{
			s[i]-=32;
		}
		cout<<s[i];
	} 
	cout<<endl;
	string s2="BVUAGBUYCFGAUIH";
    for (int i=0;i<s.size();i++)
	{
		if (s2[i]>='A' && s2[i]<='Z')
		{
			s2[i]+=32;
		}
		cout<<s2[i];
	} 
	return 0;
}