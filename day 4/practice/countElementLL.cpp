// Count the number of times a given element occurs in a Linked List

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

int countEle(node *head, int ele){
    node *temp = head;
    int count = 0;
    while(temp!=0){
        if(temp->data == ele){
            count++;
        }
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
    cout<<"Enter the element: "<<endl;
    int ele;
    cin>>ele;
    int count = countEle(head,ele) ;
    if(count == 0){
        cout<<ele<<" is not present in given linked list"<<endl;
    }
    else{
        cout<<"Number of times "<<ele<<" occurs in a given Linked List is "<<count<<endl;

    }
}

// Time Complexity - O(n)

/*

Output:

Linked List is
10 20 10 40 10 60 70
Enter the element:
10
Number of times 10 occurs in a given Linked List is 3

Linked List is
10 20 10 40 10 60 70
Enter the element:
55
55 is not present in given linked list

*/