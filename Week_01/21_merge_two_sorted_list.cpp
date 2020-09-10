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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL || l2 == NULL) {
            return l1 == NULL ? l2 : l1;
        }
        ListNode* head = new ListNode(-1);
        ListNode* intr_node = head;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val > l2->val) {
                intr_node->next = l2;
                l2 = l2->next;
            } else {
                intr_node->next = l1;
                l1 = l1->next;
            }
            intr_node = intr_node->next;
        }

        intr_node->next = (l1 != nullptr) ? l1 : l2;
        return head->next;

    }
};
