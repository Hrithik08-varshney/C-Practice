#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt.txt","w",stdout);
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
 //Insertion at the begining---------------------------------------------------------------------> 
  newnode=new node;
  cin>>newnode->data;
  newnode->next=head;
  head=newnode;
  temp=head;
  while(temp!=0){
  	cout<<temp->data<<endl;
  	temp=temp->next;
  }
  cout<<endl;
  //Insertion at the end-------------------------------------------------------------------------->
  newnode=new node;
  cin>>newnode->data;
  newnode->next=0;
  temp=head;
  while(temp->next!=0){
  	temp=temp->next;
  }
  temp->next=newnode;
  temp=head;
  while(temp!=0){
  	cout<<temp->data<<endl;
  	temp=temp->next;
  }
  cout<<endl;
  //Insertion at any location---------------------------------------------------------------------->
int place,i=1;
node *it;
  it=head;
  cin>>place;
  newnode=new node;
  cin>>newnode->data;
  newnode->next=0;
  while(i<place-1){
   it=it->next;
   i++;
  }
newnode->next=it->next;
it->next=newnode;
temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;

  //Count the length of linked list------------------------------------------------------------------------------>

  int count=0;
  temp=head;
  while(temp!=0){
    count++;
    temp=temp->next;
  }
  cout<<"Length of Linked List is "<<count;
  cout<<endl;

  //Deleting an element from begining--------------------------------------------------------------------------->

  temp=head;
  head=head->next;
  free(temp);
  temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;

  //Deleting element from the end-------------------------------------------------------------------------->
  node *prev;
  temp=head;
  while(temp->next!=0){
    prev=temp;
    temp=temp->next;
  }
  prev->next=0;
  free(temp);
  temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;

//Deleting from specified position--------------------------------------------------------------------------->

int del_pos,j=0;
cin>>del_pos;
node *del;
del=head;
while(j<del_pos-1){
  temp=del;
  del=del->next;
  j++;
}
temp->next=del->next;
del->next=0;
free(del);
temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;

//Reversing a linked list------------------------------------------------------------------------------------>
  
  node *curr;
  prev=0;
  curr=temp=head;
  while(temp!=0){
    temp=temp->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
  }
  head=prev;
  temp=head;
  while(temp!=0){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;
  return 0;
}