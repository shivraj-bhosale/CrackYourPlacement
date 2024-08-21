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


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        long int cmp=2e9;
        long int cmp2=1e9;
        
        for(long int i=0;i<n;i++){
            if(arr[i]>cmp2 && arr[i]-cmp>=1 && arr[i]-cmp<=n){
                if(arr[i]-cmp>=1){
                    if(arr[arr[i]-cmp-1]<cmp2) arr[arr[i]-cmp-1]+=cmp;
                }
            }
            else if(arr[i]>=1 && arr[i]<=n){
                if(arr[arr[i]-1]<cmp2) arr[arr[i]-1]+=cmp;
            }
        }
        long int cnt=1;
        while(cnt-1<n){
            if(arr[cnt-1]>=cmp2) cnt++;
            else break;
        }
        return cnt;
    } 
};


// solution 1 :-
// range of numbers is -1e6 to 1e6 we have to find smallest positive number
// edge case check for negative number 
// traverse the array and is the number is positive and less than n then mark that
// number in array by adding 2e9 in it
// while traversing if the number is greater than 1e9 then subtract it with 2e9 and check
// tc :- o(N) sc :- o(1)


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////