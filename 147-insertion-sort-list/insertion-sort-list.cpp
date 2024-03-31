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
   ListNode* insertionSortList(ListNode* head) {
        ListNode *previ = 0 ; 
        ListNode *prevj = 0 ; 
         for(auto i = head ; i != 0 ; i = i ->next){
            for(auto j = i ; j!= 0 ; j = j ->next ){
                if(j ->val < i ->val ){
                    swap(i->val   , j->val ); 
                }
                prevj = j ; 
            }
            previ = i ; 

        }
        return head; 
    }
};