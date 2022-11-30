/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
Return the linked list sorted as well.

Example 1:
    Input: head = [1,1,2]
    Output: [1,2]

Example 2:
    Input: head = [1,1,2,3,3]
    Output: [1,2,3]

Constraints:
    The number of nodes in the list is in the range [0, 300].
    -100 <= Node.val <= 100
    The list is guaranteed to be sorted in ascending order.


    https://leetcode.com/problems/remove-duplicates-from-sorted-list/
*/
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:


    // O(n)
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        while(tmp != NULL){
            if(tmp->next != NULL && tmp->val == tmp->next->val){
                tmp->next = tmp->next->next;
            }else{
                tmp = tmp->next;
            }
        }
        return head;
    }

// ========================================================================================


    // O(n^2)
    ListNode* deleteDuplicates(ListNode* head) {
        // If head == NULL or head.next == NULL, return empty list
        if(head == NULL || head->next == NULL){
            return head;
        }else{
            ListNode* list_ptr = head;
            ListNode* currentNode = list_ptr;
            ListNode* nextNode = currentNode->next;

             // iterate through the list.
            while(currentNode->next != NULL){
                ListNode* tmp = currentNode;

                // Set tmp to the next unique node
                while(tmp->next->val == tmp->val){
                    nextNode = currentNode->next;
                    tmp = nextNode;
                }

                // Move on to next node
                currentNode->next = tmp->next;
                currentNode = currentNode->next;
            }
            return list_ptr;
        }
    }
};

