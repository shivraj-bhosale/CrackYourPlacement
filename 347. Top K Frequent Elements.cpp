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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        vector<vector<int>>freq(1e5+1,vector<int>());
        for(auto it:mp) freq[it.second].push_back(it.first);
        for(int i=freq.size()-1;i>=0;i--){
            if(k==0) break;
            for(auto it:freq[i]){
                ans.push_back(it);
                k--;
            }
        }
        for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
        return ans;
    }
};


// solution 1
// insert in vector using index as frequency
// and vector[frequency] will give numbers with that frequency
// traverse the vector from back and return k elements
// imp :- edge cases check
// tc :- n


// solution 2
// insert in priority queue (max heap) with frequency,element 
// pop out first k elements and return the answer
// tc :-  nlogn


// solution 3
// create a vector of pair freq,ele
// sort vector and return last k elements
// tc :- nlogn


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////