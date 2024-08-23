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
    int dp[20005][2];
    
    int rec(int i,vector<pair<int,int>> &in,int back,int state){
        if(i==in.size()) return 0;

        if(dp[i][state]!=-1) return dp[i][state];

        int ans=0;
        if(in[i].first-back==1 && state==1){
            ans=rec(i+1,in,in[i].first,0);
        }
        else{
            ans=max(ans,rec(i+1,in,in[i].first,1)+(in[i].second*in[i].first));
            ans=max(ans,rec(i+1,in,in[i].first,0));
        }
        return dp[i][state]=ans;
    }

    int deleteAndEarn(vector<int>& nums) {
        vector<pair<int,int>>in;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it:mp) in.push_back({it.first,it.second});
        // for(int i=0;i<in.size();i++) cout<<in[i].first<<" "<<in[i].second<<endl;
        memset(dp,-1,sizeof(dp));
        return rec(0,in,-2,0);
        // return 0;
    }
};


// solution 1 :- sort and apply pick not pick dp
// tc :- nlogn for sort

// solution 2 :- apply pick and not pick dp instead of sort maintain a frequency array
// tc :- n


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////