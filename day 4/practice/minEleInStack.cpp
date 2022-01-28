// Design stack to getMin() in 
// With O(1) extra space

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int>s;
int minEle;

void push(int val){
    if(s.empty()){
        minEle = val;
        s.push(val);
        return;
    }
    else if(val < minEle){
        s.push(2*val-minEle);
        minEle = val;
    }
    else{
        s.push(val);
    }
}

void pop(){
    if(s.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    int top = s.top();
    s.pop();
    cout<<"Popped element is "<<endl;
    //Minimum will change as the minimum element of the stack is being removed.
    if(top<minEle){
        cout<<minEle<<endl;
        minEle = 2*minEle - top;
    }
    else{
        cout<<top<<endl;
    }
}

void getMin(){
    if(s.empty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Minimum element in stack is "<<minEle<<endl;
    }
}

void display(){
    cout<<"Stack is "<<endl;
    while(!s.empty()){
        int top = s.top();
        cout<<top<<" ";
        s.pop();
    }
    cout<<endl;
}


int main(){
    push(10);
    push(20);
    push(30);
    display();
    getMin();
    push(3);
    getMin();
}

// Time complexity = O(1)

/*
Output:

Stack is 
30 20 10
Stack is empty!
Minimum element in stack is 3

*/
