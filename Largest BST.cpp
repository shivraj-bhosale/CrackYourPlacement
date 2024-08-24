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


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



class Solution{
    public:
    
    int dfs(Node *root,int &maxi,int &mi,int &ma){
        if(root==NULL) return 0;
        
        int def_mi=mi,def_ma=ma;
        
        int l=dfs(root->left,maxi,mi,ma); swap(mi,def_mi);swap(ma,def_ma);
        int r=dfs(root->right,maxi,mi,ma);
        
    
        if((root->left==NULL || (root->left!=NULL && def_ma<root->data))&&(root->right==NULL || (root->right!=NULL && mi>root->data)) && l>=0 && r>=0) {
            maxi=max(maxi,l+r+1);
            mi=min(mi,root->data);
            ma=max(ma,root->data);
            mi=min(def_mi,mi);
            ma=max(def_ma,ma);
            return l+r+1;
        }
        else {
            return -1;
        }
    }

    int largestBst(Node *root)
    {   
    	int maxi=0;
    	int mi=1e5,ma=0;
    	dfs(root,maxi,mi,ma);
    	return maxi;
    }
};

// (when you feel need of more than one return values in recursion) good question for recursion 
// solution 1:-

// here i passed min and max with address so that i can check min/max value node in subtree
// but whenever i'll pass it to the left side of recursion this will effect min max value of right 
// side of recursion
//so i stored min max value of left side and then passed previous min/max value with the right side 
//while comparing i checked max value of left with root and min value of right with root


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////