/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

#include<iostream>
#include<stack>

using namespace std;

class CQueue {
public:
    CQueue() {
    }
    
    void appendTail(int value) {
        s_in_.push(value);
    }
    
    int deleteHead() {
        if(s_out_.empty()){
            while(!s_in_.empty()){
                s_out_.push(s_in_.top());
                s_in_.pop();
            }
        }
        if(s_out_.empty()) return -1;
        int res = s_out_.top();
        s_out_.pop();
        return res;
    }
private:
    stack<int> s_in_;
    stack<int> s_out_;
};