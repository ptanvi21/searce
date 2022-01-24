/*
This is a good way to get some practise with traversing a linked list. Print each node's data element, one per line, given a pointer to the head node of a linked list. There is nothing to output if the head reference is null (meaning the list is empty).

Create a function to print LinkedLists.

The parameter(s) for printLinkedList are as follows:
SinglyLinkedList The head of the list is referred to as the node head.
Print the value of each node in a new line

Input format
The first line of input contains p, which is the number of linked list entries. The data values for each node are contained in the next p lines, each with one element.

Complete the  printlinkedlist  in any programming language or your choice or you may write sudo code for the same

Constraints
1<=P<=1000
1<=list[i]<=1000 where list [i] is the ith element of the linked list

*/

#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};


int main(){
    int p;
    cout<<"Enter the number of linked list entries:"<<endl;
    cin>>p;
    node *head = 0, *temp, *newnode;
    for(int i=0;i<p;i++){
        cout<<"Enter the data to be inserted:"<<endl;
        newnode = (node*)malloc(sizeof(node));
        cin>>newnode->data;
        newnode->next = 0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    cout<<"Linked list is"<<endl;
    temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

/*
Output

Enter the number of linked list entries:
5
Enter the data to be inserted:
21
Enter the data to be inserted:
24
Enter the data to be inserted:
26
Enter the data to be inserted:
28
Enter the data to be inserted:
6
Linked list is
21
24
26
28
6

*/