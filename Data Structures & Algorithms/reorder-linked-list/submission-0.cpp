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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(head != NULL){
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        fast = reverseList(slow);
        slow->next = NULL;
        slow = head;
        ListNode* node = new ListNode(0);
        ListNode* ptr = node;
        while(fast->next != NULL){
            ptr->next = slow;
            slow = slow->next;
            ptr = ptr->next;
            ptr->next = fast;
            fast = fast->next;
            ptr = ptr->next;
        }
        ptr->next = slow;
        head = node->next;
    }
};
