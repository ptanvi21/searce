// Circular Queue 

#include <iostream>
#define SIZE 5 
using namespace std;

int items[SIZE], front = -1, rear = -1;

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }
  
  bool isEmpty() {
    if (front == -1){
      return true;
    }
    else{
      return false;
    }
  }

  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full"<<endl;
    } 
    else {
      if (front == -1) {
          front = 0;
      }
      rear = (rear + 1) % SIZE;
      items[rear] = element;
    }
  }

  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return -1;
    } 
    else {
      element = items[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      }
      else {
        front = (front + 1) % SIZE;
      }
      return element;
    }
  }

  void display() {
    int i;
    if (isEmpty()) {
      cout<<"Queue is empty"<<endl;
    } else {
      for (i = front; i != rear; i = (i + 1) % SIZE){
          cout<<items[i]<<" ";
      }
      cout << items[i];
      cout<<endl;
    }
  }

int main() {
  cout<<"Is circular queue empty?   ";
  deQueue();
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);
  cout<<"Circular queue is"<<endl;
  display();
  int front = deQueue();
  if (front != -1){
      cout<<"Dequeued element is "<<front<<endl;
  }
  cout<<"Circular queue is"<<endl;
  display();
  cout<<"Is circular queue empty?   ";
  if(isEmpty()==true){
      cout<<"Circular queue is empty"<<endl;
  }
  else{
      cout<<"Circular queue is not empty"<<endl;
  }
  enQueue(7);
  cout<<"Circular queue is"<<endl;
  display();
  enQueue(8);
}

//Time complexity of the enqueue and dequeue operations is O(1)

/*
Output

Is circular queue empty?   Queue is empty
Queue is full
Circular queue is
1 2 3 4 5
Dequeued element is 1
Circular queue is
2 3 4 5
Is circular queue empty?   Circular queue is not empty
Circular queue is
2 3 4 5 7
Queue is full

*/