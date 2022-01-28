// First Recurring Character in given string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char solve(string s){
    set<char>st;
    for(int i=0;i<s.size();i++){
        if(st.find(s[i])!=st.end()){
            return s[i];
        }
        else{
            st.insert(s[i]);
        }
    }
    return '0';
}

int main(){
    string s;
    cout<<"Enter string:"<<endl;
    cin>>s;
    char ans = solve(s);
    if(ans=='0'){
        cout<<"No character is repeated in given string"<<endl;
    }
    else{
    cout<<"First Recurring Character in string "<<s<<" is "<<ans<<endl;
    }
}

// Time complexity = O(n)

/*
Output:

Enter string:
DBCABA
First Recurring Character in string DBCABA is B

Enter string:
ABCDE
No character is repeated in given string
*/