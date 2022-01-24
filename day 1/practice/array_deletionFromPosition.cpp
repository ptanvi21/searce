// Deletion from the end of an array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int pos;
    cout<<"Enter the position from where the element is to be deleted: "<<endl;
    cin>>pos;
    n--;
    for(int i=pos-1;i<n;i++){
        a[i] = a[i+1];
    }
    cout<<"Resultant array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// Time complexity = O(n)

/*
Output

Enter the number of elements: 
5
Enter array elements: 
21 22 12 10 26
Enter the position from where the element is to be deleted:
3
Resultant array :
21 22 10 26

*/