// Implementation of the queue using singly linked list

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *front=0, *rear=0;

void insert(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = 0;
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void remove(){
    node *temp = front;
    if(front==0){
        cout<<"Queue is empty"<<endl;
    }
    else{
        temp = front;
        front = front->next;
        if(front==0){
            rear = 0;
        }
        cout<<"Deleted element is "<<temp->data<<endl;
        free(temp);
    }
}

void display(){
    node *temp = front;
    if(front==0){
        cout<<"Queue is empty"<<endl;
    }
    while(temp!=0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    insert(1);
    insert(3);
    insert(5);
    cout<<"Queue is "<<endl;
    display();
    remove();
    cout<<"After removing first element, queue is"<<endl;
    display();
    remove();
    cout<<"After removing first element, queue is"<<endl;
    display();
}

// Time complexity of both operations enqueue() and dequeue() is O(1)

/*
Output

Queue is 
1 3 5
Deleted element is 1
After removing first element, queue is
3 5
Deleted element is 3
After removing first element, queue is
5

*/