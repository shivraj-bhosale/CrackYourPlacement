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
    
    bool check(vector<int>& nums, int k, int mid){
        int groups=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                sum=nums[i];
                groups++;
                if(sum>mid) return 0;
            }
        }
        if(groups<=k) return 1;
        else return 0;
    }

    int splitArray(vector<int>& nums, int k) {
        long long int l=0,r=1e9;
        while(r-l>1){
            long long int mid=l+(r-l)/2;  
            if(check(nums,k,mid)) r=mid;
            else l=mid+1;
        }
        if(check(nums,k,l)) return l;
        return r;
    }
};


// solution :-
// binary search on answer
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