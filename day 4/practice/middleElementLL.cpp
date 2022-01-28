// Middle Element of Given List

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

int middleEle(node *head){
    node*slow=head,*fast=head;
    while(fast!=0 && fast->next!=0){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main(){
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(40);
    createNode(50);
    createNode(60);
    createNode(70);
    cout<<"Linked List is"<<endl;
    node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Middle element of given linked list is "<<middleEle(head)<<endl;
}

// Time Complexity - O(n)

/*

Output:

Linked List is
10 20 30 40 50 60 70 
Middle element of given linked list is 40

*/