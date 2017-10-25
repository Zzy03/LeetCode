class Solution {
public:
    bool isPalindrome(ListNode* head) {
		ListNode *slow = head;
		ListNode *fast = head;
		if(fast==NULL || fast->next==NULL) return true;
		while(fast->next!=NULL && fast->next->next!=NULL){
			slow = slow->next;
			fast = fast->next->next;
		}  
		ListNode *mid = slow;
		ListNode *tmp = mid->next;
		while(tmp->next!=NULL){
			ListNode *p = tmp->next;
			tmp->next = p->next;
			p->next = mid->next;
			mid->next = p;
		}
		slow = head;
		fast = mid->next;
		while(fast!=NULL){
			if(fast->val!=slow->val) return false;
			slow = slow->next;
			fast = fast->next;
		}
		return true;
    }
};