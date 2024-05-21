#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
    long int T,A,B;
    cin>>T;
    for (int i=0;i<T;i++){
    	cin>>A>>B;
    	if (A<B){
    		cout<<A<<endl;
    	}
    	else{
    		cout<<A%B<<endl;
    	}
    }
     return 0;
}
