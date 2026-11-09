/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   bool isPalindrome(ListNode* head) {
    stack<int> st;
    for (ListNode* t = head; t; t = t->next) st.push(t->val);

    for (ListNode* t = head; t; t = t->next) {
        if (t->val != st.top()) return false;
        st.pop();
    }
    return true;
}
};