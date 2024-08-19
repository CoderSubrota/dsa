// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if (!head || !head->next) return true;
        
//         ListNode* slow = head, *fast = head;
//         while (fast->next && fast->next->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         ListNode* reversed = reverse(slow->next);
//         while (reversed) {
//             if (head->val != reversed->val) return false;
//             head = head->next;
//             reversed = reversed->next;
//         }
        
//         return true;
//     }
    
//     ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         while (head) {
//             ListNode* nextTemp = head->next;
//             head->next = prev;
//             prev = head;
//             head = nextTemp;
//         }
//         return prev;
//     }
// };