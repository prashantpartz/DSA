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
    ListNode* middleNode(ListNode* head) {
        ListNode*ptr = head;
        int i= 0;
        while(ptr!=NULL){
            ptr = ptr->next;
            i++;
        }
        int j =0;
        ptr = head;
        while(j<i/2){
            ptr = ptr->next;
            j++;
        }
        return ptr;


    }
};