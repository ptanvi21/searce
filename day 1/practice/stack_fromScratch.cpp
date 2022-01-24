// Implement stack from scratch

#include<iostream>
using namespace std;

int top=-1;
int stack[100];

void push(){
    int n;
    cin>>n;
    if(top==n){
        cout<<"Stack is full"<<endl;
    }
    else{
        top++;
        stack[top]=n;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        int x = stack[top];
        top--;
        cout<<"Popped element is "<<x<<endl;
    }

}

void display(){
    cout<<"Elements in the stack are"<<endl;
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

void peek(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Peek is "<<stack[top]<<endl;
    }
}

void isEmpty(){
    if (top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}

int main(){
    cout<<"Push elements into stack"<<endl;
    push();
    push();
    push();
    push();
    pop();
    display();
    peek();
    pop();
    cout<<"Is stack empty?   ";
    isEmpty();
    pop();
    pop();
    cout<<"Is stack empty?   ";
    isEmpty();
}

// Time complexities of push, pop, empty, peek is o(1)


/*
Output:

Push elements into stack
1
2
3
4
Popped element is 4
Elements in the stack are
1 2 3
Peek is 3
Popped element is 3
Is stack empty?   Stack is not empty
Popped element is 2
Popped element is 1
Is stack empty?   Stack is empty

*/
