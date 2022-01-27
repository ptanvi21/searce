// Convert an array to reduced form

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
    unordered_map<int, int>m;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = a[i];
    }
    sort(temp,temp+n);
    int val = 0;
    for(int i=0;i<n;i++){
        m[temp[i]] = val++;
    }
    for(int i=0;i<n;i++){
        a[i] = m[a[i]];
    }
    cout<<"Converted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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
    solve(a,n);
}

// Time complexity - O(n log n)

/*
Output


Enter the number of elements in an array:
6
Enter array elements:
10 20 15 12 11 50
Converted array is
0 4 3 2 1 5
*/