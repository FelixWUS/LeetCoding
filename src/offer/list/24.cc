/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /*
        if(!head) return nullptr;
        stack<ListNode*> st;
        while(head){
            st.push(head);
            head = head->next;
        }
        ListNode* rt_head = st.top();
        ListNode* node = rt_head;
        st.pop();
        while(!st.empty()){
            ListNode* tmp = st.top();
            tmp->next = nullptr;
            node->next = tmp;
            st.pop();
            node = node->next;
        }
        return rt_head;
        */
        
        ListNode* cur = head, *pre = nullptr;
        while(cur){
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(2);

    Solution so;
    ListNode* res = so.reverseList(head);
    return 0;
}
