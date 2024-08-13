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
    int target;
    vector<vector<int>>ans;

    void rec(int i,vector<int>&temp){
        if(temp.size()==target) {
            ans.push_back(temp);
            return;
        }
        if(i==n+1 || temp.size()>target) return;
        temp.push_back(i);
        rec(i+1,temp);
        temp.pop_back();
        rec(i+1,temp);
    }

    vector<vector<int>> combine(int N, int k) {
        vector<int>temp;
        n=N;
        target=k;
        rec(1,temp);
        return ans;
    }
};


// solution 1:-
// take the current number and go to next iteration
// don't take the current number and go to next iteration
// tc :- 2^n


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////