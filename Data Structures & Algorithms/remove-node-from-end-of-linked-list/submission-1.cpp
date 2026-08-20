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

    int countNode(ListNode* head){
        int c = 0;
        while(head != NULL){
            c++;
            head = head->next;
        }

        return c;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = countNode(head);
        if(size == n) return head->next;
        n = size-n;
        ListNode* temp = head;
        for(int i = 1;i<n;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};
