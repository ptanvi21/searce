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
    n--;
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
2 3 5 6 8
Resultant array :
2 3 5 6

*/