#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>q;
    q.push_front(3);
    q.push_back(6);
    q.push_front(10);
    q.push_front(15);
    cout<<"Deque front: "<<q.front()<<endl;
    q.pop_front();
    cout<<"Deque back: "<<q.back()<<endl;
    q.pop_back();
    cout<<"Deque front: "<<q.front()<<endl;
    cout<<"Deque back: "<<q.back()<<endl;
}

// Time complexity = O(1)

/*
Output

Deque front: 15
Deque back: 6
Deque front: 10
Deque back: 3

*/
