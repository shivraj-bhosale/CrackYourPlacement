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


// MyQueue* obj = new MyQueue();
// obj->push(x);
// int param_2 = obj->pop();
// int param_3 = obj->peek();
// bool param_4 = obj->empty();


class MyQueue {
public:
    stack<int>st1,st2;

    MyQueue() {
        // st1=new stack<>();
        // st2=new stack<>();
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.size()==0){
            while(st1.size()!=0){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int a= st2.top();
        st2.pop();
        return a;
        
    }
    
    int peek() {
        if(st2.size()==0){
            while(st1.size()!=0){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        if(st1.size()==0 && st2.size()==0) return true;
        return false;
    }
};


// solution 1
// push in stack1 
// pop/peek from satck2 if stack2 empty then transfer elements from stack1 to stack2 
// size if both stacks are empty
// amortized time complexity for pop/peek o(1)


// solution 2
// push :- transfer element from stack1 to stack2 then push in stack1 and again transfer element from stack2 to stack1
// pop/peek from stack1
// size check for stack1
// o(n) time complexity for push

void invictus(){

}

////////////////////////////////////////
int main(){                          ///
init_io();                           ///
ll t;cin>>t;                         ///
while(t--) invictus();               ///
}                                    ///
////////////////////////////////////////