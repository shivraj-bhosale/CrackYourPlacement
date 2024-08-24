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
    TreeNode* ptr;

    void flatten(TreeNode* root) {
        if(root==NULL) return;        
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()!=0){
            TreeNode* temp=st.top();
            st.pop();
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL)st.push(temp->left);
            temp->right=NULL;temp->left=NULL;
            if(temp==root) ptr=root;
            else {
                ptr->right=temp;
                ptr=ptr->right;
            }
        }   
    }
};



// solution :-
// iterate using stack like a preorder and a temporary pointer 



void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////