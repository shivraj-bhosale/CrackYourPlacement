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
    unordered_map<int,int>mp;
    vector<vector<int>>ans;
    vector<pair<int,int>>in;

    void rec(int i,int target,vector<int>&temp){
        if(target==0) {
            ans.push_back(temp);
            return;
        }
        else if(i==n) return;
        rec(i+1,target,temp);
        for(int j=1;j<=in[i].second;j++){
            if(target-in[i].first*j>=0){
                temp.push_back(in[i].first);
                rec(i+1,target-(in[i].first*j),temp);
            }
            else break;
        }
        while(temp.size()>0 && temp.back()==in[i].first) temp.pop_back();
    }

    vector<vector<int>> combinationSum2(vector<int>& com, int target) {    
        for(int i=0;i<com.size();i++) mp[com[i]]++;
        for(auto it:mp) in.push_back({it.first,it.second});
        n=mp.size();
        vector<int>temp;
        rec(0,target,temp);
        for(int i=0;i<n;i++) cout<<in[i].first<<" "<<in[i].second<<endl;
        return ans;
    }
};


// solution 1 :-
// main crisp was that there are many occurences of a number 
// but they don't want duplicate sets forming a target
// so count frequency of a number and apply backtracking on that
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