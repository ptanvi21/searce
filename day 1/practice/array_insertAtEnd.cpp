// Insertion at the end of an array

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
    int x;
    cout<<"Enter the element to be inserted at the end of the array"<<endl;
    cin>>x;
    a[n] = x;
    cout<<"Resultant array :"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<a[i]<<" ";
    }
}

// Time complexity = O(n)

/*
Output

Enter the number of elements:
3
Enter array elements:
1 2 3
Enter the element to be inserted at the end of the array
4
Resultant array :
1 2 3 4

*/