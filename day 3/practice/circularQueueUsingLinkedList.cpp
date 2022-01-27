// Implementation of circular queue using Linked List

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next, *prev;
};

node *front=0, *rear=0;

void enqueue(int val){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    newnode->next = 0;
    if(front==0 && rear==0){
        front = rear = newnode;
        rear->next = front;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        newnode->next = front;
    }
}

void deque(){
    node *temp = front;
    if(front==0 && rear==0){
        cout<<"Circular Queue is empty"<<endl;
    }
    else if(front==rear){
        front = rear = 0;
        cout<<"Deleted element is "<<temp->data<<endl;
        free(temp);
    }
    else{
        front = front->next;
        rear->next = front;
        cout<<"Deleted element is "<<temp->data<<endl;
        free(temp);
    }
}

void display(){
    node *temp = front;
    if(front==0 && rear==0){
        cout<<"Circular Queue is empty"<<endl;
    }
    else{
        cout<<"Circular Queue is"<<endl;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=front);
        cout<<endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    deque();
    display();
    deque();
    display();
    deque();
    display();
}

/*
Output:

Circular Queue is
10 20 30
Deleted element is 10
Circular Queue is
20 30
Deleted element is 20
Circular Queue is
30 
Deleted element is 30
Circular Queue is empty
*/