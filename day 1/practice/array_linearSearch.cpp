// Searching for an Element in an array using Linear Search

#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

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
    cout<<"Enter the element to be searched:"<<endl;
    cin>>x;
    int res = linearSearch(a,n,x);
    if(res==-1){
        cout<<x<<" is not present in the given array"<<endl;
    }
    else{
        cout<<x<<" is present at index "<<res<<endl;
    }
}

// Time complexity = O(n)

/*
Output

Enter the number of elements: 
5
Enter array elements: 
65 22 1 33 88
Enter the element to be searched:
22
22 is present at index 1



Enter the number of elements: 
4
Enter array elements: 
1 2 3 4
Enter the element to be searched:
22
22 is not present in the given array

*/