/*
You are given the heads of two sorted linked lists, list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

Example 1:
    Input: list1 = [1,2,4], list2 = [1,3,4]
    Output: [1,1,2,3,4,4]

Example 2:
    Input: list1 = [], list2 = []
    Output: []

Example 3:
    Input: list1 = [], list2 = [0]
    Output: [0]

Constraints:
    The number of nodes in both lists is in the range [0, 50].
    -100 <= Node.val <= 100
    Both list1 and list2 are sorted in non-decreasing order.

    https://leetcode.com/problems/merge-two-sorted-lists/
*/
#include <iostream>

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list_ptr = list1;

        if(list1->val > list2->val){
            list_ptr = list2;
        }else{
            list1 = list1->next;
        }
        ListNode* result = list_ptr;

        // Step through each list, adding each value to the result in ascending order
        while(list1 && list2){
            if(list1->val < list2->val){
                result->next = list1;
                list1 = list1->next;
            }else{
                result->next = list2;
                list2 = list2->next;
            }
            result = result->next;
        }

        // If one list is shorter than the other, append the remaining items to result.
        if(!list1){
            result->next = list2;
        }else{
            result->next = list1;
        }

       return list_ptr;
    }

};
