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


struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


struct Node * rec(int &ind,int pre[], char leaf[],int n){
    if(ind>=n) return NULL;
    Node *root=new Node(pre[ind]);
    if(leaf[ind]=='L') return root;
    
    ind++;
    Node *l=rec(ind,pre,leaf,n);
    ind++;
    Node *r=rec(ind,pre,leaf,n);
    root->left=l;
    root->right=r;
    return root;
}

struct Node *constructTree(int n, int pre[], char leaf[])
{
    int ind=0;
    return rec(ind,pre,leaf,n);
}


// solution 1:-
// assign value of index to root;
// incement index and go to left
// increment index and go to right
// return when you catch null and ind>=n


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////