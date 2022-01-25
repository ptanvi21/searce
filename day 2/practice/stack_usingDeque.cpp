// Implementation of the stack using deque
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
        cout<<"Size of stack is "<<count<<endl;
    }
    else{
        cout<<"Stack is empty"<<endl;
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

void removeLast(){
    if(!isEmpty()){
        node *temp = tail;
        tail = tail->prev;
        tail->next = 0;
        cout<<"Popped element is "<<temp->data<<endl;
        free(temp);
    }
}

void push(int x){
    insertLast(x);
}

void pop(){
    removeLast();
}

void display(){
    cout<<"Stack is "<<endl;
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
    push(21);
    display();
    size();
    push(24);
    push(28);
    display();
    pop();
    display();
    size();
    pop();
    if(isEmpty()==true){
        cout<<"Stack is empty"<<endl;
    }
}

// Time complexity of both insertion and deletion is O(1)

/*
Output

Stack is 
21
Size of stack is 1
Stack is
21 24 28
Popped element is 28
Stack is
21 24
Size of stack is 2
Popped element is 24

*/
