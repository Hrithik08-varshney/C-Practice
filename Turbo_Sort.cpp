#include<bits/stdc++.h> 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
 /* int t,n,flag;
  vector<int> v;
  cin>>t;
  for(int i=0;i<t;i++){
     flag=0;
    cin>>n;
    for(int j=0;j<v.size();j++){
        if(v[j]==n){
            flag=1;
        }
        }
        if(flag==0){
            v.push_back(n);
    }
}
 sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  return 0;
}*/
/*#include<bits/stdc++.h> 
using namespace std;
int main(){
  int t,n;
  cin>>t;
  int arr[t];
   set<int> s;
  for(int i=0;i<t;i++){
      cin>>n;
      arr[i]=n;
  }
  int siz= sizeof(arr) / sizeof(arr[0]);
      for(int i=0;i<siz;i++){
           s.insert(arr[i]);
      }
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it <<endl;
return 0;
}*/
int t,n,flag;
scanf("%d",&t);
int arr[t],l;
l=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<t;i++){
     flag=0;
    scanf("%d",&n);
    for(int j=0;j<l;j++){
        if(arr[j]==n){
            flag=1;
        }
        }
        if(flag==0){
            arr[i]=n;
    }
}
 sort(arr,arr+l);
  for(int i=0;i<l;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}