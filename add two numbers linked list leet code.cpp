#include<bits/stdc++.h>
using namespace std;
void link(){
  
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  struct node
  {
    int data;
    struct node * next;
  };
  node *head=0,*newnode=0,*temp;
  int choice=1;
  while(choice){
    newnode=new node;
    cin>>newnode->data;
    newnode->next=0;
    if(head==0){
      head=temp=newnode;
    }
    else{
      temp->next=newnode;
      temp=newnode;
    }
    cin>>choice;
  }
  temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;
  return 0;
}