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


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *t1=head, *t2=head;
        while(t2!=NULL){
            t2=t2->next;
            if(t2==NULL) break;
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
};


//solution 1
// fast pointer will move by 2x speed 
// slow pointer will move by x speed
// stop when fast pointer reaches null 
// return slow pointer as it will be middle


void invictus(){
    
}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////