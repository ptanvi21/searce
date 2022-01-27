#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node *newNode(int data){
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = newnode->right = 0;
    return newnode;
}

void VerticalOrderTraversal(node *root){
    if(root==0){
        return;
    }
    queue<pair<int,node*>>q;
    int hd = 0;
    q.push({hd,root});
    map<int,vector<int>>m;
    while(!q.empty()){
        pair<int,node *>curr = q.front();
        q.pop();
        hd = curr.first;
        node *node= curr.second;
        m[hd].push_back(node->data);
        if(node->left){
            q.push({hd-1,node->left});
        }
        if(node->right){
            q.push({hd+1,node->right});
        }
    }
    map<int,vector<int>>::iterator it;
    for (it=m.begin();it!= m.end(); it++) {
        for(int i=0;i<it->second.size();++i){
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->right->right->left->right->right = newNode(12);
    cout<<"Vertical order traversal of binary tree is"<<endl;
    VerticalOrderTraversal(root);
}

// Time complexity = O(n log n)

/*
Output:

Vertical order traversal of binary tree is
4
2
1 5 6
3 8 10
7 11
9 12

*/
