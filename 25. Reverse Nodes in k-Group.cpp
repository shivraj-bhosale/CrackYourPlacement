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

    int len(ListNode* head){
        if(head==NULL) return 0;
        return 1+len(head->next);
    }
    
    void reverse(ListNode* &curr, int k, ListNode* &head, ListNode* &tail){
        ListNode *left=NULL,*right=NULL;
        while(k--){
            right=curr->next;
            curr->next=left;
            left=curr;
            curr=right;
        }
        curr=left;
        head=right;
        tail=curr;
        while(tail->next!=NULL) tail=tail->next;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int length=len(head);
        ListNode* ans;
        ListNode* tail=NULL;ListNode *join=NULL;
        ListNode* curr=head;
        for(int i=1;i<=(length/k);i++) {
            join=tail;
            curr=head;
            reverse(curr,k,head,tail);
            if(i==1) ans=curr;
        }
        //for remaining nodes
        tail->next=head;
        return ans;
    }
};


// solution 1:- reverse the list n/k times and keep track of head of new list and tail of old list
// and join both


void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////