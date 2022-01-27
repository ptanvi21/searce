// Count pairs with given sum

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bruteForce(int a[],int n,int sum){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                count++;
            }
        }
    }
    return count;
}

int optimal(int a[],int n,int sum){
    int count = 0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        if(m.find(sum-a[i])!=m.end()){
            count += m[sum-a[i]];
        }
        m[a[i]]++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array:"<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"Enter sum value:"<<endl;
    cin>>sum;

    // Time complexity - O(n^2)
    cout<<"Using brute force approach, number of pairs with sum "<<sum<<" is/are "<<bruteForce(a,n,sum)<<endl;

    // Time complexity - O(n)
    cout<<"Using optimal approach, number of pairs with sum "<<sum<<" is/are "<<optimal(a,n,sum)<<endl;
}

/*
Output:

Enter the number of elements in an array:
5
Enter array elements:
1 5 7 -1 5
Enter sum value:
6
Using brute force approach, number of pairs with sum 6 is/are 3
Using optimal approach, number of pairs with sum 6 is/are 3 

*/