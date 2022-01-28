// Detect loop in linked list

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
    return newnode;
}

bool detectLoop(node *head){
    node*slow=head,*fast=head;
    while(fast!=0 && fast->next!=0){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);
    //creating a loop
    head->next->next->next->next->next = head->next->next;
    
    if(detectLoop(head)){
        cout<<"Loop found in given linked list"<<endl;
    }
    else{
        cout<<"Loop not found in given linked list"<<endl;
    }
}

// Time Complexity - O(n)

/*

Output:

Loop found in given linked list

*/