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


class Solution {
public:
    int n;
    int dp[2001][2001];
    bool rec(int i,vector<int>& in,int back){
        if(i==n-1) return true;
        if(dp[i][back]!=-1) return dp[i][back];
        bool ans=0;
        int curr_jump;
        if(i==0) {
            curr_jump=1;
            if(in[i]+1==in[i+1]) ans|=rec(i+1,in,i);
            return dp[i][back]=ans;
        }
        curr_jump=in[i]-in[back];
        int ind;
        for(int j=-1;j<=1;j++){
            ind=lower_bound(in.begin()+i+1,in.end(),in[i]+curr_jump+j)-in.begin();
            // cout<<i<<" <= i,  in[i]=> "<<in[i]<<"  jump=> "<<curr_jump<<"  ind=> "<<ind<<endl;
            if(ind<n && ind>i && in[ind]==in[i]+curr_jump+j) ans|=rec(ind,in,i);
        }
        return dp[i][back]=ans;
    }

    bool canCross(vector<int>& in) {
        memset(dp,-1,sizeof(dp));
        n=in.size();
        return rec(0,in,0);
    }
};


// solution 1 :-
// using a dp we memoised curr index, last index
// to calculate next index we used binary search
//tc :- n*n*logn
//or use hashmap instead of vector for n*n

//solution 2 :-
//can also do using hashmap and double traversal of array
//tc :- n*n


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////