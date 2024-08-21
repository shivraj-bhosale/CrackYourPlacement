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
    int minCost(string colors, vector<int>& time) {
        int ans=0;
        char back='0';
        int cnt=0;
        int max_time=0;
        int common_ans=0;
        for(int i=0;i<time.size();i++){
            if(back==colors[i]){
                max_time=max(max_time,time[i]);
                common_ans+=time[i];
                cnt++;
            }
            else{
                if(cnt>=2){
                    ans+=(common_ans-max_time);
                }
                cnt=1;
                max_time=time[i];
                common_ans=time[i];
            }
            back=colors[i];
        }
        if(cnt>=2) ans+=(common_ans-max_time);
        return ans;
    }
};


// solution :-
// greedy, whenever more than 1 consequtive ballon spotted
// eliminate max and add all the mins


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////