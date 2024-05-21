//with time complexity of O(N^2)

/*#include<bits/stdc++.h>
using namespace std;
void nextgreater(int arr[],int n){
	int flag=0;
	for(int i=0;i<n;++i){
		flag=0;
      for(int j=i+1;j<n;++j)
      	if(arr[i]<arr[j]){
      		cout<<arr[j]<<" ";
      		flag=1;
      		break;
      	}
      	if(!flag)
      		cout<<-1<<" ";
	}
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int arr[]={4,5,2,25,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  nextgreater(arr,n);
  return 0;
}*/

//time complexity o(n)

#include<bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int>v){
    vector<int>nge(v.size());
    stack<int>st;
    int val=v.size();
    for(int i=0;i<val;++i){
        while(!st.empty()&&v[i]>v[st.top()]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i]; }
    vector<int>nge=NGE(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<(nge[i]==-1?-1:v[nge[i]])<<endl;
    }
    return 0;
}
