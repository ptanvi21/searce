#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(10);
    q.push(15);
    cout<<endl;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        cout<<"Popped element is "<<top<<endl;
    }
}

// Time complexity = O(1)

/*
Output

Popped element is 3
Popped element is 6
Popped element is 10
Popped element is 15

*/