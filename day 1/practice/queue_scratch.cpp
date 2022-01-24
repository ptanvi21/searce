//Queue

#include<iostream>
using namespace std;
#define N 5
int a[N];
int front=-1,rear=-1;

void enque(int x){
    if(rear==N-1){
        cout<<"Overflow"<<endl;
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        a[rear]=x;
    }
    else{
        rear++;
        a[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){
        cout<<"Dequeued element = "<<a[front]<<endl;
        front=rear=0;
    }
    else{
        cout<<"Dequeued element = "<<a[front]<<endl;
        front++;
    }
}

void display(){
    cout<<"Elements in Queue are"<<endl;
    for(int i=front;i<rear+1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void peek(){
    if(front==-1 && rear==-1){
        cout<<"Empty Queue"<<endl;
    }
    else{
        cout<<"Peek Element is "<<a[front]<<endl;
    }
}

void isEmpty(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}

int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    display();
    peek();
    dequeue();
    peek();
    display();
    cout<<"Is queue empty?   ";
    isEmpty();
}

// Time complexities of enque, deque, empty, peek is o(1)

/*
Output

Elements in Queue are
10 20 30 40
Peek Element is 10
Dequeued element = 10
Peek Element is 20
Elements in Queue are
20 30 40
Is queue empty?   Queue is not empty

*/