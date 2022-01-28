// Find nth Element / node of linked list

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = 0;

node *createNode(int data){
    node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next=0;
    node *temp;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    return newnode;
}

int nthNode(node *head,int n){
    node*temp;
    temp=head;
    for(int i=1;i<n;i++){
        temp=temp->next;
    }
    return temp->data;
}

int main(){
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(40);
    createNode(50);
    createNode(60);
    cout<<"Linked List is"<<endl;
    node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Enter the value of n:"<<endl;
    int n;
    cin>>n;
    cout<<n<<"th node of given linked list is "<<nthNode(head,n)<<endl;
}

// Time Complexity - O(n)

/*
Output:

Linked List is
10 20 30 40 50 60
Enter the value of n:
4
4th node of given linked list is 40
*/