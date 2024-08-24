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
    vector<vector<int>>ans;
    int n;
    
    void rec(int i,vector<pair<int,int>> &in,vector<int>temp){
        if(i==n) {
            ans.push_back(temp);
            return;
        }

        for(int j=1;j<=in[i].second;j++){
            temp.push_back(in[i].first);
        }
        for(int j=1;j<=in[i].second;j++){
            rec(i+1,in,temp);
            temp.pop_back();
        }
        rec(i+1,in,temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map<int,int>mp;
        vector<pair<int,int>>in;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp) in.push_back({it.first,it.second});
        for(int i=0;i<in.size();i++) cout<<in[i].first<<" "<<in[i].second<<endl;
        n=in.size();
        vector<int>temp;
        rec(0,in,temp);
        return ans;
    }
};


// solution :-
// sort them according thier duplicate values and store in vector with number and frequency
// apply backtracking on new vector


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////