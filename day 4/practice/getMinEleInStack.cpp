// Design stack to getMin() in O(1) time
// With O(n) extra space

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int>s1,minStack;

void push(int val){
    s1.push(val);
    if(minStack.empty() || val<=minStack.top()){
        minStack.push(val);
    }
}

void pop(){
    if(s1.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    if(s1.top()==minStack.top()){
        int top = minStack.top();
        minStack.pop();
        cout<<"Popped element is "<<top<<endl;
    }
    s1.pop();
}

int getMin(){
    if(s1.empty()){
        return -1;
    }
    return minStack.top();
}

void display(){
    cout<<"Stack is "<<endl;
    while(!s1.empty()){
        int top = s1.top();
        cout<<top<<" ";
        s1.pop();
    }
    cout<<endl;
}


int main(){
    push(10);
    push(20);
    push(30);
    display();
    int minEle = getMin();
    if(minEle==-1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
    cout<<"Minimum element in stack is "<<minEle<<endl;
    }
    push(3);
    display();
    if(minEle==-1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
    cout<<"Minimum element in stack is "<<minEle<<endl;
    }
}

// Time complexity = O(1)

/*
Output:

Stack is
30 20 10
Stack is empty!
Stack is
3
Stack is empty!

*/