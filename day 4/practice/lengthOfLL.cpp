// Length of Linked List

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

int length(node *head){
    node *temp = head;
    int count = 0;
    while(temp!=0){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    createNode(10);
    createNode(20);
    createNode(10);
    createNode(40);
    createNode(10);
    createNode(60);
    createNode(70);
    cout<<"Linked List is"<<endl;
    node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Length of given linked list is "<<length(head)<<endl;
}

// Time Complexity - O(n)

/*
Output:

Linked List is
10 20 10 40 10 60 70
Length of given linked list is 7
*/