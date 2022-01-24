//Push and pop elements into stack

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(21);
    cout<<"Pushed element is "<<s.top()<<endl;
    s.push(24);
    cout<<"Pushed element is "<<s.top()<<endl;
    s.push(28);
    cout<<"Pushed element is "<<s.top()<<endl;
    s.push(10);
    cout<<"Pushed element is "<<s.top()<<endl;
    s.push(6);
    cout<<"Pushed element is "<<s.top()<<endl;

    cout<<endl;

    while(!s.empty()){
        int top = s.top();
        s.pop();
        cout<<"Popped element is "<<top<<endl;
    }
}

//Time Complexity: O(1)

/*
Output

Pushed element is 21
Pushed element is 24
Pushed element is 28
Pushed element is 10
Pushed element is 6

Popped element is 6
Popped element is 10
Popped element is 28
Popped element is 24
Popped element is 21

*/
