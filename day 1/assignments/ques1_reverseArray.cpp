/*
An array is a data structure that keeps items of the same kind in a single memory block. Each memory position in an array, P, of size Q, has a unique index, I (where 0=i=Q), which may be referred as P[i] or Pi. Reverse an integer array.

Example 
P=[4,5,6]
Return [6,5,4]

Reverse an integer array. Description of the Function

complete the reverseArray function in any programming language or your choice or you may write sudo code for the same

The parameter(s) for reverseArray are:
int P [q]: the array to reverse  

Returns
Int[q]: the reversed array

Input format
The first line includes an integer, Q, which represents the number of integers in P.
P is made up of Q space-separated numbers on the second line.

Constraints
1<=Q<=103
1<=p[i]<=104 where p[i]  is the ith integer in P

Sample input 

5
8
7
6

Sample output

6
7
8
5

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseP(int p[],int q){
    for(int i=0;i<q/2;i++){
        swap(p[i],p[q-i-1]);
    }
}

void display(int p[],int q){
    for(int i=0;i<q;i++){
        cout<<p[i]<<" ";
    }
}

int main(){
    int q;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>q;
    int p[100];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<q;i++){
        cin>>p[i];
    }
    cout<<"Array is"<<endl;
    display(p,q);
    reverseP(p,q);
    cout<<"\nReverse array is"<<endl;
    display(p,q);
}

/*
Output

Enter the number of elements in array:
5
Enter array elements:
1 2 3 4 5
Array is
1 2 3 4 5
Reverse array is
5 4 3 2 1

Enter the number of elements in array:
6
Enter array elements:
1 2 3 4 5 6
Array is
1 2 3 4 5 6
Reverse array is
6 5 4 3 2 1

*/