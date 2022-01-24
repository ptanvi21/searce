// Sort an array

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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

// Time complexity = O(n^2)

/*
Output

Enter the number of elements: 
7
Enter array elements: 
22 44 66 21 2 99 56
Sorted array :
2 21 22 44 56 66 99

*/