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
    vector<int> reversePrint(ListNode* head) {
        stack<int> st;
        vector<int> res;
        ListNode* node = head;
        while(node){
            st.push(node->val);
            node = node->next;
        }
        int size = st.size();
        for(int i=0; i<size; i++){
            res.emplace_back(st.top());
            st.pop();
        }
        return res;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(2);

    Solution so;
    vector<int> res = so.reversePrint(head);
    return 0;
}