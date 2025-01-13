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
    ListNode* sortList(ListNode* head) {
        vector<int> v ; 
        ListNode *t = head ; 
        while(t){
            v.push_back(t->val); 
            t = t->next; 
        }
        sort(v.begin() , v.end()); 
        ListNode * res = new ListNode(0);
        ListNode *curr = res;  
        for(int i = 0 ; i<v.size() ;i++){
            ListNode *x = new ListNode(v[i]); 
            curr ->next = x ; 
            curr = curr ->next ; 
        }
        return res->next; 
    }
};