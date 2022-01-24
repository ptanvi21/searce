// Insertion at the Beginning of an array

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
    cout<<"Enter the element to be inserted at the beginning of the array"<<endl;
    cin>>x;
    n++;
    for(int i=n;i>1;i--){
        a[i-1] = a[i-2];
    }
    a[0] = x;
    cout<<"Resultant array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// Time complexity = O(n)

/*
Output

Enter the number of elements:
3
Enter array elements:
2 3 4
Enter the element to be inserted at the beginning of the array
1
Resultant array :
1 2 3 4

*/