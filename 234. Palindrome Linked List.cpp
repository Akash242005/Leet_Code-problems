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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        while(head != NULL)
        {
            a.push_back(head->val);
            head = head->next;
        }
        int high = a.size()-1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=a[high-i])
            {
                return false;
            }
        }
        return true;
    }
};
