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



 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int dp[1002][5];
    int ctr=0;

    void dfs(TreeNode* root){
        if(root==NULL) return;
        root->val=ctr;
        ctr++;
        dfs(root->left);
        dfs(root->right);
    }

    int rec(TreeNode* root,int ht){
        if(root==NULL) return 0;

        if(dp[root->val][ht]!=-1) return dp[root->val][ht];

        int ans=INT_MAX;
        if(ht==2 && root->left==NULL && root->right==NULL)  ans=1;

        else if(ht==3) ans=rec(root->left,1)+rec(root->right,1)+1;
        
        else{
            ans=min(ans,rec(root->left,1)+rec(root->right,1)+1);
            ans=min(ans,rec(root->left,ht+1)+rec(root->right,ht+1));
            if(root->left!=NULL) ans=min(ans,rec(root->right,2)+rec(root->left,3));
            if(root->right!=NULL) ans=min(ans,rec(root->left,2)+rec(root->right,3));
        }
        return dp[root->val][ht]=ans;
    }

    int minCameraCover(TreeNode* root) {
        // if(root->left==NULL && root->right==NULL) return 1;
        memset(dp,-1,sizeof(dp));
        dfs(root);
        return rec(root,2);
    }
};

// best solution 
// solution 1 :- it will be never optimal to set camera on leaf node 
// instead set camera on leaf nodes parent...
// set a camera remove all the nodes visible repeat this till tree vanishes
// tc:- o(n);


// solution 2 :- use dp on trees 
// set a variable height which states current height of the node from camera...which should be 1 always
// do consider the cases where you have to set curr height 2 and then set camera on next node where curr height will be 3
// [0,0,0,null,0,0,null,null,0] use this case for better understanding the solution


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////