#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
int t,num;
	cin>>t;
	while(t--){
	    set<int>s1;
	    for(int i=0;i<4;i++)
	    {
	        cin>>num;
	        s1.insert(num);
	    }
	    /*    set<int >::iterator itr;
	    for (itr = s1.begin(); itr != s1.end(); itr++)
         {
           cout << *itr<<" ";
         }*/
         if(s1.size()==4)
         	cout<<stoi("2")<<endl;
         else if(s1.size()==3)
         	cout<<stoi("1")<<endl;
         else if(s1.size()==2){
             int val;
            set<int>::reverse_iterator rit;        
                /*for(itr=s1.begin();itr!=stoi("1");itr++)
            {
            	 val=*itr;
            }*/
            for (rit = s1.rbegin(); rit != s1.rend(); rit++)
                          val=*rit;
         	if(s1.count(val)==2)
         		cout<<stoi("2")<<endl;
         	else
         		cout<<stoi("1")<<endl;

         }
         else cout<<stoi("0")<<endl;
	}
	return 0;
}