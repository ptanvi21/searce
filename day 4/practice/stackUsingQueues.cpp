// Implement stack using Queue

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

queue<int>q1,q2;

void pushCostly(int val){
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(val);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}

void pop(){
    if(q1.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        int front = q1.front();
        q1.pop();
        cout<<"Popped element is "<<front<<endl;
    }
}

void push(int val){
    q1.push(val);
}

void popCostly(){
    if(q1.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        while(!q1.size()){
            q2.push(q1.front());
            q1.pop();
        }
        int front = q1.front();
        q1.pop();
        cout<<"Popped element is "<<front<<endl;
    }
}

int main(){
    // making push operation costly
    pushCostly(10);
    pushCostly(20);
    pushCostly(30);
    pop();
    pop();
    pop();

    // making pop operation costly
    push(1);
    push(2);
    push(3);
    popCostly();
    popCostly();
    popCostly();
    popCostly();
}

/*
Time complexity

- Making push operation costly
    Push operation: O(n)
    Pop operation: O(1)
- Making pop operation costly
    Push operation: O(1)
    Pop operation: O(n)
*/

/*
Output:

Popped element is 30
Popped element is 20
Popped element is 10
Popped element is 1
Popped element is 2
Popped element is 3
Stack is empty!

*/