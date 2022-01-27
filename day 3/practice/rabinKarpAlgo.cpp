// Implementation of Rabin-Karp Algorithm

#include<iostream>
using namespace std;

// d - number of characters in the input alphabet
#define d 256

void solve(string text, string pattern, int q){
    int m = pattern.size();
    int n = text.size();
    int i,j;
    // p - hash value for pattern 
    // t - hash value for text
    int p=0, t=0, h=1;
    // value of h = pow(d,m-1)%q;
    for(int i=0;i<m-1;i++){
        h = (h*d)%q;
    }
    // calculate hash value for pattern and text
    for(int i=0;i<m;i++){
        p = (d*p + pattern[i])%q;
        t = (d*t + text[i])%q;
    }
    // find the match
    for (i=0;i<=n-m;i++) {
    //if hash values of pattern and text matches
    if (p==t) {
      for (j=0;j<m;j++) {
        if (text[i+j]!=pattern[j])
          break;
      }
      if (j==m)
        cout<<"Pattern is found at position "<<i +1<< endl;
    }
    // Calculate hash value for next window of text: Remove leading digit, add trailing digit
    if (i<n-m) {
      t = (d *(t-text[i]*h)+text[i+m])%q;
      // convert negative value of t to positive
      if (t<0)
        t=(t+q);
    }
  }
}

int main(){
    string text, pattern;
    cout<<"Enter text:"<<endl;
    cin>>text;
    cout<<"Enter pattern:"<<endl;
    cin>>pattern;
    int p;
    cout<<"Enter prime number:"<<endl;
    cin>>p;
    solve(text,pattern,p);
}

// Time complexity
// best case - O(n+m) 
// worst case - O(mn), when all characters of pattern and text are same

/*
Output:

Enter text:
ABCCDDAEFG
Enter pattern:
CDD
Enter prime number:
13
Pattern is found at position 4


Enter text:
AAAAAAA 
Enter pattern:
AAA
Enter prime number:
4
Pattern is found at position 1
Pattern is found at position 2
Pattern is found at position 3
Pattern is found at position 4
Pattern is found at position 5

*/