// Searching for an Element in an array using Binary Search

#include<iostream>
using namespace std;

int binarySearch(int a[],int start,int end,int x){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
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
    int res = binarySearch(a,0,n-1,x);
    if(res == -1){
        cout<<x<<" is not present in the given array"<<endl;
    }
    else{
        cout<<x<<" is present at index "<<res<<endl;
    }
}

// Time complexity = o(log n)

/*
Output

Enter the number of elements: 
5
Enter array elements: 
1 6 21 24 28
Enter the element to be searched:
21
21 is present at index 2



Enter the number of elements: 
3   
Enter array elements: 
1 2 3
Enter the element to be searched:
4
4 is not present in the given array

*/