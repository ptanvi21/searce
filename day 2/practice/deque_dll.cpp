// Implementation of Deque using Doubly Linked List

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next, *prev;
};

node *front=0, *rear=0;

void insertAtFront(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data=data;
    if(front==0){
        front = rear = newnode;
    }
    else{
        newnode->next = front;
        front->prev = newnode;
        front = newnode;
    }
}

void insertAtEnd(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data=data;
    if(rear==0){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
}

void deleteFront(){
    if(front==0){
        cout<<"Deque is empty"<<endl;
    }
    if(front==rear){
        cout<<"Deleted element is "<<front->data<<endl;
        front = rear = 0;
    }
    else{
        node *temp = front;
        front = front->next;
        front->prev = 0;
        cout<<"Deleted element is "<<temp->data<<endl;
    }
}

void deleteEnd(){
    if(rear==0){
        cout<<"Deque is empty"<<endl;
    }
    if(front==rear){
        cout<<"Deleted element is "<<rear->data<<endl;
        front = rear = 0;
    }
    else{
        node *temp = rear;
        rear = rear->prev;
        rear->next = 0;
        cout<<"Deleted element is "<<temp->data<<endl;
    }
}

void getFront(){
    if(front!=0){
        cout<<"Front element is "<<front->data<<endl;
    }
    else{
        cout<<"Deque is empty"<<endl;
    }
}

void getEnd(){
    if(rear!=0){
        cout<<"Rear element is "<<rear->data<<endl;
    }
    else{
        cout<<"Deque is empty"<<endl;
    }
}

void size(){
    if(front!=0){
        node *temp = front;
        int c = 0;
        while(temp!=0){
            c++;
            temp = temp->next;
        }
        cout<<"Size of deque is "<<c<<endl;
    }
    else{
        cout<<"Deque is empty"<<endl;
    }
}

void display(){

    if(front==0){
        cout<<"Deque is empty"<<endl;
    }
    node *temp = front;
    cout<<"Deque is"<<endl;
    while(temp!=rear){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}

int main(){
    insertAtFront(10);
    insertAtFront(20);
    insertAtEnd(30);
    display();
    getFront();
    getEnd();
    deleteFront();
    display();
    deleteEnd();
    display();
    size();
}

// Time complexity of all operations is O(1)

/*
Output:

Deque is
20 10 30
Front element is 20  
Rear element is 30   
Deleted element is 20
Deque is
10 30
Deleted element is 30
Deque is
10
Size of deque is 1  

*/