//   ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* first = dummy;
//         ListNode* second = dummy;
        
//         // Advance first pointer so that the gap between first and second is n nodes apart
//         for (int i = 0; i <= n; i++) {
//             first = first->next;
//         }
        
//         // Move first to the end, maintaining the gap
//         while (first) {
//             first = first->next;
//             second = second->next;
//         }
        
//         // Remove the nth node from the end
//         second->next = second->next->next;
//         return dummy->next;