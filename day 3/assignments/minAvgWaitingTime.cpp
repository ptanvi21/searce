#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // cout<<"Enter number of customers:"<<endl;
    cin >> n;
    vector<pair<long,long>>v(n);
    // cout<<"Enter the time when customers ordered the pan and the time required to cook the pan"<<endl;
    for (int i=0;i<n;i++) {
        cin>>v[i].first>>v[i].second;        
    }
    sort(v.begin(), v.end());
    long long sum = 0;
    set<pair<long,long>> s;
    long long temp = v[0].first;
    int i = 0;
    while(i<n || s.size()) {
        while(i<n && v[i].first<=temp) {
            s.insert({v[i].second, i});
            i++;
        }
        if(s.empty()){
            temp = v[i].first;
        } 
        else{
            int i = s.begin()->second;
            s.erase(s.begin());
            temp += v[i].second;
            sum += temp-v[i].first;
        }
    }
    // cout<<"Minimum average waiting time is "<<endl;
    cout<<sum/n<< endl;
    return 0;
}

// Time complexity: O(n)

/*

Input:
3
0 3
1 9
2 6
Output:
9

*/