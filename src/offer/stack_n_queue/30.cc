/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

#include<iostream>
#include<stack>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s_data_.push(x);
        if(!s_min_.empty() && x<s_min_.top()){
            s_min_.push(x);
        }
        else if(s_min_.empty()){
            s_min_.push(x);
        }
    }
    

    void pop() {
        int top = s_data_.top();
        s_data_.pop();
        if(s_min_.top() == top){
            s_min_.pop();
        }
    }
    
    int top() {
        return s_data_.top();
    }
    
    int min() {
        return s_min_.top();
    }
private:
    stack<int> s_data_;
    stack<int> s_min_;
};