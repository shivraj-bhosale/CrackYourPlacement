////////////////////////////////////////
#include<bits/stdc++.h>              ///
using namespace std;                 ///
#define ll long long int             ///
#define ull unsigned long long int   ///
#define vell vector<ll>              ///
const ll MOD = 1e9 + 7;              ///
void init_io() {                     ///
ios_base::sync_with_stdio(false);    ///
cin.tie(nullptr);                    ///
}                                    ///
////////////////////////////////////////


// Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// your task is to complete the Function
// Function should return median of the BST


void inorder(struct Node *root,float &sum,int &height,int &ctr){
    if(root==NULL) return;
    inorder(root->left,sum,height,ctr);
    ctr++;
    if(height%2==1){
        if(ctr==(height/2)+1) sum+=root->data;
    }
    else{
        if(ctr==height/2 || ctr==(height/2)+1) sum+=root->data;
    }
    inorder(root->right,sum,height,ctr);
}

int total_nodes(struct Node *root){
    if(root==NULL) return 0;
    return 1+total_nodes(root->left) + total_nodes(root->right);
}

float findMedian(struct Node *root)
{
    float sum=0;
    int height; 
    int ctr=0;
    height = total_nodes(root);
    
    inorder(root,sum,height,ctr);
    if(height%2==1) return sum;
    return sum/2;
}


// *NOTE :- dont keep global or static variables
// solution 1:-
// calculate height 
// then keep a ctr and traverse inorder and add value of node in sum when ctr will reach meadian
// tc :- o(n)
// sc :- stack space for traversal o(n)

void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////