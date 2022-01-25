// Implementation of Stock Analysis Applet 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int a[],int n){
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if (s.top().first>a[i]){
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first<=a[i]){
            while(!s.empty() && s.top().first<=a[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }
    for(int i=0;i<v.size();i++){
        v[i]=i-v[i];
    }
    cout<<"Span values are"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter number of days"<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter prices"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];	
    }
    solve(a,n);
}

//Time complexity = O(n)

/*
Output

Enter number of days
7
Enter prices
100 80 60 70 60 75 85
Span values are
1 1 1 2 1 4 6

*/