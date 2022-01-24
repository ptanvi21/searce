// Deletion from the Beginning of an array

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
    n--;
    for(int i=0;i<n;i++){
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
1 3 4 6 7
Resultant array :
3 4 6 7

*/