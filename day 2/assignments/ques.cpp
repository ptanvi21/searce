/*
You have an empty sequence, and you will be given
queries. Each query is one of these three types:
1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

Function Description
Complete the getMax function in the editor below.
getMax has the following parameters:
- string operations[n]: operations as strings
Returns
- int[]: the answers to each type 3 query
Input Format
The first line of input contains an integer,
. The next
lines each contain an above mentioned query.
Constraints
1<=n<=105
1<=x<=109
1<=type<=3

All queries are valid.

Sample Input
STDIN   Function
-----   --------
10      operations[] size n = 10
1 97    operations = ['1 97', '2', '1 20', ....]
2
1 20
2
1 26
1 20
2
3
1 91
3

Sample Output
26
91

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,val;
    stack<int>s, maxStack;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            cin>>val;
            if(s.empty()){
                s.push(val);
                maxStack.push(val);
            }
            else{
                if(val>maxStack.top()){
                    maxStack.push(val);
                }
                else{
                    maxStack.push(maxStack.top());
                }
                s.push(val);
            }
        }
        else if(x==2){
            if(!s.empty()){
                maxStack.pop();
                s.pop();
            }
        }
        else if(x==3){
            cout<<maxStack.top()<<endl;
        }
    }
}

// Time complexity = O(1)