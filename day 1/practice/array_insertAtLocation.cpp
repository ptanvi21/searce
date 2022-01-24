// Insertion at specific location in an array

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
    cout<<"Enter the position where the element is to be inserted: "<<endl;
    cin>>pos;
    int x;
    cout<<"Enter the element to be inserted:"<<endl;
    cin>>x;
    n++;
    for(int i=n-1;i>=pos-1;i--){
        a[i+1] = a[i];
    }
    a[pos-1] = x;
    cout<<"Resultant array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// Time complexity = O(n)

/*
Output

Enter the number of elements: 
4
Enter array elements: 
2 4 6 8
Enter the position where the element is to be inserted:
3
Enter the element to be inserted:
10
Resultant array :
2 4 10 6 8

*/