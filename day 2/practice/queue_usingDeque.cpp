// Implementation of the queue using deque

#include <iostream>
using namespace std;

struct node{
    int data;
    node *prev, *next;
};

node *head = 0, *tail = 0;

bool isEmpty(){
    if(head==0){
        return true;
    }
    return false;
}

void size(){
    if(!isEmpty()){
        node *temp = head;
        int count = 0;
        while(temp!=0){
            count++;
            temp = temp->next;
        }
        cout<<"Size of queue is "<<count<<endl;
    }
    else{
        cout<<"Queue is empty"<<endl;
    }
}

void insertLast(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    if(head==0){
        head = tail = newnode;
        newnode->next = newnode->prev = 0;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = 0;
        tail = newnode;
    }
}

void removeFirst(){
    if(!isEmpty()){
        node *temp = head;
        head = head->next;
        head->prev = 0;
        cout<<"Dequed element is "<<temp->data<<endl;
        free(temp);
    }
}

void enqueue(int x){
    insertLast(x);
}

void deque(){
    removeFirst();
}

void display(){
    cout<<"Queue is "<<endl;
    if(!isEmpty()){
        node *temp = head;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    enqueue(21);
    display();
    size();
    enqueue(24);
    enqueue(28);
    display();
    deque();
    display();
    size();
    deque();
    display();
    deque();
}

// Time complexity of both insertion and deletion is O(1)

/*
Output

Queue is 
21
Size of queue is 1
Queue is
21 24 28
Dequed element is 21
Queue is
24 28
Size of queue is 2
Dequed element is 24
Queue is
28

*/
