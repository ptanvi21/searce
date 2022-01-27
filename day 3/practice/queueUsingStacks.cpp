// Implementing queue using stacks

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int>s1,s2;

void enqueCostly(int val){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(val);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

void dequeue(){
    if(s1.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    int top = s1.top();
    s1.pop();
    cout<<"Dequeued element is "<<top<<endl;
}

void enqueue(int val){
    s1.push(val);
}

void dequeCostly(){
    if(s1.empty() && s2.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int top = s2.top();
    s2.pop();
    cout<<"Dequeued element is "<<top<<endl;
}

int main(){
    
    //making enqueue operation costly
    enqueCostly(100);
    enqueCostly(200);
    enqueCostly(300);
    dequeue();
    dequeue();
    dequeue();

    //making deque operation costly
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeCostly();
    dequeCostly();
    dequeCostly();
    dequeCostly();
}

/*
Time complexity

- Making enqueue operation costly
    Push operation: O(n)
    Pop operation: O(1)

- Making dequeue operation costly
    Push operation: O(1)
    Pop operation: O(n)

*/

/*
Output: 

Dequeued element is 100
Dequeued element is 200
Dequeued element is 300
Dequeued element is 10
Dequeued element is 20
Dequeued element is 30
Queue is empty!

*/